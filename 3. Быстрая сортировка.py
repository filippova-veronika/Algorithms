import random
from pprint import pprint

#Задание 1
def quicksort_array(array):
    if len(array) <= 1:
        return array
    pivot = array[len(array) // 2]
    left = [x for x in array if x < pivot]
    middle = [x for x in array if x == pivot]
    right = [x for x in array if x > pivot]
    return quicksort_array(left) + middle + quicksort_array(right)

#Пример генерации массива из 1000 случайных чисел
arr1 = [random.randint(1, 1000) for _ in range(1000)]
sorted_arr1 = quicksort_array(arr1)

#Задание 2
def quicksort50_100(array):
    if len(array) <= 1:
        return array
    pivot = array[len(array)//2]
    left = [x for x in array if x < pivot]
    middle = [x for x in array if x == pivot]
    right = [x for x in array if x > pivot]
    return quicksort50_100(left) + middle + quicksort50_100(right)

arr2 = [random.randint(50, 100) for _ in range(20)]
sorted_arr2 = quicksort50_100(arr2)

#Задание 3
def quicksort_matrix_first_col(matrix):
    if len(matrix) <= 1:
        return matrix
    pivot = matrix[len(matrix)//2][0]
    left = [x for x in matrix if x[0] < pivot]
    middle = [x for x in matrix if x[0] == pivot]
    right = [x for x in matrix if x[0] > pivot]
    return quicksort_matrix_first_col(left) + middle + quicksort_matrix_first_col(right)

table = [[random.randint(5, 61) for _ in range(3)] for _ in range(5)]
sorted_table = quicksort_matrix_first_col(table)
pprint(sorted_table, width=20)

#Задание 4
def sort_students_list(students):
    students.sort()
    return students

students_list = ["Petrov", "Sidorov", "Melnikov", "Alekseev"]
sorted_students = sort_students_list(students_list)