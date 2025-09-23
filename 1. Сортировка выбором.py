#Задание1

random_array_one = [50, 72, 6, 4, 100, 83, 86, 40, 55]
sort_array_one = []

for i in range(len(random_array_one)):
    maxItem = random_array_one[0]
    maxItemNumber = 0
    for j in range(len(random_array_one)):
        k = random_array_one[j]
        if k < maxItem or k == maxItem:
            maxItem = k
            maxItemNumber = j
    del random_array_one[maxItemNumber]
    sort_array_one.append(maxItem)

print("Задание1:")
print(sort_array_one)
print()

#Задание2

random_array_two = [30, 7, 27, 0, 56, 80, 93, 32, 10, 33]
sort_array_two = []

for i in range(len(random_array_two)):
    maxItem = random_array_two[0]
    maxItemNumber = 0
    for j in range(len(random_array_two)):
        k = random_array_two[j]
        if k > maxItem or k == maxItem:
            maxItem = k
            maxItemNumber = j
    del random_array_two[maxItemNumber]
    sort_array_two.append(maxItem)

print("Задание2:")
print(sort_array_two)
print()

#Задание3

random_array_three = [
    "22-46-50",
    "50-44-20",
    "03-04-20",
    "19-35-27",
    "25-33-60",
    "45-87-31",
    "70-50-30",
    "99-43-20",
    "21-67-80",
    "90-85-33",
]
sort_array_three = []

for i in range(len(random_array_three)):
    maxItem = random_array_three[0]
    maxItemNumber = 0
    for j in range(len(random_array_three)):
        k = int(random_array_three[j].replace("-", ""))
        if k < int(maxItem.replace("-", "")) or k == int(maxItem.replace("-", "")):
            maxItem = random_array_three[j]
            maxItemNumber = j
    del random_array_three[maxItemNumber]
    sort_array_three.append(maxItem)

print("Задание3:")
print(sort_array_three)
print()