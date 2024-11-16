import csv
import sys

csv.field_size_limit(sys.maxsize)
with open('train.csv') as csvfile:
    spamreader = csv.reader(csvfile, delimiter=",", quotechar='"')
    num_rows = 0
    num_hex_rays = 0
    for row in spamreader:
        print(row)
        # if row[1] != "HR":
        #     num_rows += 1
        #     if "Hex-Rays" in row[1]:
        #         num_hex_rays += 1
        #     else:
        #         print(row)

# print(f"Total Rows: {num_rows}:")
# print(f"Total Hex Rays: {num_hex_rays}:")
# pct = num_hex_rays / num_rows
# print(f"Percentage of total: {pct}")