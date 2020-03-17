
import csv


cwb_filename = '107000206.csv'
#cwb_filename = 'sample_input.csv'

data = []

header = []

with open(cwb_filename) as csvfile:

   mycsv = csv.DictReader(csvfile)

   header = mycsv.fieldnames

   for row in mycsv:

      data.append(row)

#=======================================




output_list = []

#------------------------------------------------------------------------------1
target_data = list(filter(lambda item: item['station_id'] == 'C0A880', data))

#print("\n")

#print("\n")

max_TEMP = target_data[0]['TEMP']
max_TEMP_number = float(max_TEMP)

for i in range(len(target_data)):
    #print(target_data[i]['TEMP'])
    if(max_TEMP_number <= float(target_data[i]['TEMP'])):
        max_TEMP_number = float(target_data[i]['TEMP'])

#print("\n")
#print(max_TEMP_number)

if(max_TEMP_number==(-99 or -999)):
    output_list.append(['C0A880','None'])
else:
    output_list.append(['C0A880', max_TEMP_number])


#print(output_list)
#------------------------------------------------------------------------------1






#------------------------------------------------------------------------------2
target_data = list(filter(lambda item: item['station_id'] == 'C0F9A0', data))

#print("\n")
#print("len = ", len(target_data))
#print("\n")

max_TEMP = target_data[0]['TEMP']
max_TEMP_number = float(max_TEMP)

for i in range(len(target_data)):
    #print(target_data[i]['TEMP'])
    if(max_TEMP_number <= float(target_data[i]['TEMP'])):
        max_TEMP_number = float(target_data[i]['TEMP'])

#print("\n")
#print(max_TEMP_number)

if(max_TEMP_number==(-99 or -999)):
    output_list.append(['C0F9A0','None'])
else:
    output_list.append(['C0F9A0', max_TEMP_number])

#print(output_list)
#------------------------------------------------------------------------------2






#------------------------------------------------------------------------------3
target_data = list(filter(lambda item: item['station_id'] == 'C0G640', data))

#print("\n")
#print("len = ", len(target_data))
#print("\n")

max_TEMP = target_data[0]['TEMP']
max_TEMP_number = float(max_TEMP)

for i in range(len(target_data)):
    #print(target_data[i]['TEMP'])
    if(max_TEMP_number <= float(target_data[i]['TEMP'])):
        max_TEMP_number = float(target_data[i]['TEMP'])

#print("\n")
#print(max_TEMP_number)

if(max_TEMP_number==(-99 or -999)):
    output_list.append(['C0G640','None'])
else:
    output_list.append(['C0G640', max_TEMP_number])

#print(output_list)
#------------------------------------------------------------------------------3





#------------------------------------------------------------------------------4
target_data = list(filter(lambda item: item['station_id'] == 'C0R190', data))

#print("\n")
#print("len = ", len(target_data))
#print("\n")

max_TEMP = target_data[0]['TEMP']
max_TEMP_number = float(max_TEMP)

for i in range(len(target_data)):
    #print(target_data[i]['TEMP'])
    if(max_TEMP_number <= float(target_data[i]['TEMP'])):
        max_TEMP_number = float(target_data[i]['TEMP'])

#print("\n")
#print(max_TEMP_number)

if(max_TEMP_number==(-99 or -999)):
    output_list.append(['C0R190','None'])
else:
    output_list.append(['C0R190', max_TEMP_number])

#print(output_list)
#------------------------------------------------------------------------------4




#------------------------------------------------------------------------------5
target_data = list(filter(lambda item: item['station_id'] == 'C0X260', data))

#print("\n")
#print("len = ", len(target_data))
#print("\n")

max_TEMP = target_data[0]['TEMP']
max_TEMP_number = float(max_TEMP)

for i in range(len(target_data)):
    #print(target_data[i]['TEMP'])
    if(max_TEMP_number <= float(target_data[i]['TEMP'])):
        max_TEMP_number = float(target_data[i]['TEMP'])

#print("\n")
#print(max_TEMP_number)

if(max_TEMP_number==(-99 or -999)):
    output_list.append(['C0X260','None'])
else:
    output_list.append(['C0X260', max_TEMP_number])

print(output_list)
#------------------------------------------------------------------------------5


