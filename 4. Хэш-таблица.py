def main():
    numbers_set = {}  #изменили имя переменной
    with open('input.txt', 'r') as f:
        data = f.read().split()  #читаем все сразу и разбиваем на числа
        for num_str in data:
            num = int(num_str)
            if num > 0:
                numbers_set[num] = True
            elif num < 0:
                numbers_set.pop(-num, None)  #удаляем элемент, если есть, иначе игнорируем
            else:
                result = sorted(numbers_set.keys())
                with open('output.txt', 'w') as out_f:
                    out_f.write(' '.join(map(str, result)))
                return

main()
