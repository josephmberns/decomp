import csv
import os

dec_directory = "decompiled_retdec"
directory = "source_code"

with open(f"{dec_directory}.csv", mode='w', newline='', encoding='utf-8') as file:
    writer = csv.writer(file, quotechar='`')
    for filename in os.listdir(directory):
        filepath = os.path.join(directory, filename)
        dec_filepath = os.path.join(dec_directory, filename)
        if os.path.isfile(filepath):  # Check if it's a file (not a directory)
            decompiled = ""
            try:
                with open(filepath, 'r') as file:
                    source = file.read().replace("`", "")
                with open(dec_filepath, 'r') as file:
                    decompiled = file.read().replace("`", "")
                writer.writerow([source, decompiled])
            except:
                print(f"can't find {dec_filepath}")