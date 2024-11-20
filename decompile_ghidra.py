import os
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

GHIDRA_INSTALL = Path("/Users/joeberns/Downloads/ghidra_11.2.1_PUBLIC")
GHIDRA_HEADLESS = GHIDRA_INSTALL / 'support' / 'analyzeHeadless'

GHIDRA_APP_PROPERTIES = GHIDRA_INSTALL / 'Ghidra' / 'application.properties'

def main():
    binary_dir = Path("binary")
    for in_file in binary_dir.iterdir():
        with tempfile.TemporaryDirectory() as tempdir:
            #conts = sys.stdin.buffer.read()
            #infile = tempfile.NamedTemporaryFile(dir=tempdir, delete=False)
            #infile.write(conts)
            #infile.flush()
            #inname = infile.name
            #infile.close()

            project_dir = tempfile.TemporaryDirectory(dir=tempdir)
            output_dir = tempfile.TemporaryDirectory(dir=tempdir)

            output_file = Path("decompiled") / in_file.stem
            output_file = output_file.with_suffix(".c")
            parent_dir = Path(__file__).resolve().parent

            decompile_command = [
                f"{GHIDRA_HEADLESS}",
                project_dir.name,
                "temp",
                "-import",
                #inname,
                str(in_file),
                "-scriptPath",
                f"{parent_dir}",
                "-postScript",
                f"{parent_dir}/DecompilerExplorer.java",
                output_file
            ]

            env = os.environ.copy()
            env['PATH'] = f"{parent_dir}/jdk/bin:{env['PATH']}"

            if not os.path.exists(output_file):
                decomp = subprocess.run(decompile_command, capture_output=True, env=env)
                if decomp.returncode != 0 or not os.path.exists(output_file):
                    print(f'{decomp.stdout.decode()}\n{decomp.stderr.decode()}')
                    sys.exit(1)

            with open(output_file, 'r') as f:
                print(f.read())


if __name__ == '__main__':
    if len(sys.argv) > 1 and sys.argv[1] == '--version':
        version = None
        revision = None
        for line in GHIDRA_APP_PROPERTIES.read_text().splitlines():
            parts = line.split('=')
            if len(parts) < 2:
                continue
            name, val = parts
            if name == 'application.version':
                version = val
                break
        for line in GHIDRA_APP_PROPERTIES.read_text().splitlines():
            parts = line.split('=')
            if len(parts) < 2:
                continue
            name, val = parts
            if name == 'application.revision.ghidra':
                revision = val
                break
        if version is not None and revision is not None:
            print(version)
            print(revision)
        else:
            print("Unknown")
            print("Unknown")
        sys.exit(0)

    if len(sys.argv) > 1 and sys.argv[1] == '--name':
        print('Ghidra')
        sys.exit(0)

    if len(sys.argv) > 1 and sys.argv[1] == '--url':
        print('https://ghidra-sre.org')
        sys.exit(0)

    main()
