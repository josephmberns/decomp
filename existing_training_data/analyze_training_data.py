import csv
import sys
import re

 # Patterns for generic stripped names
stripped_patterns = [
    r'\bFUN_\w+\b',   # Common function pattern
    r'\bsub_\w+\b',   # Subroutine pattern
    r'\bDAT_\w+\b',   # Data variable pattern
    r'\bloc_\w+\b'    # Local variable pattern
]

csv.field_size_limit(sys.maxsize)
with open('train.csv') as csvfile:
    spamreader = csv.reader(csvfile, delimiter=",", quotechar='"')
    num_rows = 0
    num_hex_rays = 0
    striped_count = 0
    for row in spamreader:
        if row[1] != "HR":
            num_rows += 1
            if "Hex-Rays" in row[1]:
                num_hex_rays += 1
            else:
                print(row)
            # Count occurrences of each pattern
            results = {pattern: len(re.findall(pattern, row[1])) for pattern in stripped_patterns}

            # Heuristic: Consider it stripped if a high proportion are generic
            total_matches = sum(results.values())
            readable_names = len(re.findall(r'\b[a-zA-Z_][a-zA-Z0-9_]*\b', row[1])) - total_matches

            if total_matches > readable_names:
                striped_count += 1
    

print(f"Total Rows: {num_rows}:")
print(f"Total Hex Rays: {num_hex_rays}:")

pct = num_hex_rays / num_rows
print(f"Percentage of total: {pct}")

print(f"Total Striped: {striped_count}")
pct = striped_count / num_rows
print(f"Percentage of total: {pct}")