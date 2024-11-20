import os
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path


RETDEC_INSTALL = Path(os.getenv("RETDEC_INSTALL_PATH", "/Users/joeberns/Downloads/RetDec-v5.0-macOS-Release/bin"))
RETDEC_DECOMPILER = RETDEC_INSTALL / 'retdec-decompiler'


def main():
    binary_dir = Path("binary")
    for in_file in binary_dir.iterdir():
        try:
            with tempfile.TemporaryDirectory() as tempdir:
                output_file = Path("decompiled_retdec") / in_file.stem
                output_file = output_file.with_suffix(".c")
                parent_dir = Path(__file__).resolve().parent

                decomp = subprocess.run([RETDEC_DECOMPILER, '--output', str(output_file), '--cleanup', '--silent', str(in_file)], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
                if decomp.returncode != 0:
                    print(f'{decomp.stdout.decode()}\n{decomp.stderr.decode()}')
                    sys.exit(1)

                with open(str(output_file), 'rb') as f:
                    sys.stdout.buffer.write(f.read())
        except:
            continue


def version():
    proc = subprocess.run([RETDEC_DECOMPILER, '--version'], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    # RetDec version :  v4.0-415-g05c9b113
    # Commit hash    :  05c9b11351d3e82012d823fa3709f940033768cf
    # Build date     :  2022-04-13T20:37:02Z
    output = proc.stdout.decode()
    lines = output.split('\n')
    version_lines = [l for l in lines if l.startswith('RetDec version : ')]
    commit_lines  = [l for l in lines if l.startswith('Commit hash    : ')]
    assert len(version_lines) == 1
    assert len(commit_lines) == 1
    version = version_lines[0][18:]
    assert version[0] == 'v'
    version = version[1:]
    # strip second hyphen and beyond cause we don't care
    version = '-'.join(version.split('-')[:2])
    revision = commit_lines[0][18:26] # 8 chars is enough

    print(version)
    print(revision)


if __name__ == '__main__':
    if len(sys.argv) > 1 and sys.argv[1] == '--name':
        print('RetDec')
        sys.exit(0)
    if len(sys.argv) > 1 and sys.argv[1] == '--url':
        print('https://github.com/avast/retdec')
        sys.exit(0)
    if len(sys.argv) > 1 and sys.argv[1] == '--version':
        version()
        sys.exit(0)

    main()
