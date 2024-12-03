import csv 
import sys
import random

csv.field_size_limit(sys.maxsize)

data = []
with open('train_dataset_HR.csv') as csvfile:
    spamreader = csv.reader(csvfile, delimiter=",", quotechar='"')
    for row in spamreader:
        data.append([row[0], row[1]])
    
retdec_testing_data = random.sample(data, 891)

with open('decompiled_hexrays.csv', 'w') as csvfile:
    spamwriter = csv.writer(csvfile, delimiter=',', quotechar='`')
    for row in retdec_testing_data:
        spamwriter.writerow(row)