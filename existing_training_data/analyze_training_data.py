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
with open('sample_data/train.csv') as csvfile:
    spamreader = csv.reader(csvfile, delimiter=",", quotechar='`')
    num_rows = 0
    num_hex_rays = 0
    striped_count = 0
    print_count = 0
    for row in spamreader:
        decompiled = row[1]
        if decompiled != "HR":
            num_rows += 1
            if "Hex-Rays" in decompiled:
                num_hex_rays += 1
            # else:
            #     print(row)
            # Count occurrences of each pattern
            results = {pattern: len(re.findall(pattern, decompiled)) for pattern in stripped_patterns}

            # Heuristic: Consider it stripped if a high proportion are generic
            total_matches = sum(results.values())
            readable_names = len(re.findall(r'\b[a-zA-Z_][a-zA-Z0-9_]*\b', decompiled)) - total_matches

            if total_matches > readable_names:
                striped_count += 1
            if "printf" in decompiled:
                print_count += 1
    

print(f"Total Rows: {num_rows}")

print(f"Total Hex Rays: {num_hex_rays}")
pct = num_hex_rays / num_rows
print(f"Percentage of total: {pct}")

print(f"Total Striped: {striped_count}")
pct = striped_count / num_rows
print(f"Percentage of total: {pct}")

print(f"Total With Prints: {print_count}")
pct = print_count / num_rows
print(f"Percentage of total: {pct}")

# Training data
# Total Rows: 95132
# Total Hex Rays: 95132
# Percentage of total: 1.0
# Total Striped: 0
# Percentage of total: 0.0
# Total With Prints: 84895
# Percentage of total: 0.8923916242694362

# Decompiled Ghidra
# Total Rows: 892
# Total Hex Rays: 0
# Percentage of total: 0.0
# Total Striped: 0
# Percentage of total: 0.0
# Total With Prints: 821
# Percentage of total: 0.9204035874439462

# Decompiled Retdec
# Total Rows: 889
# Total Hex Rays: 0
# Percentage of total: 0.0
# Total Striped: 0
# Percentage of total: 0.0
# Total With Prints: 818
# Percentage of total: 0.9201349831271091