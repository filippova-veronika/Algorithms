print("Выберите задачу: 1 (Лекции) или 2 (Коробки)")
task = int(input())

if task == 1:
    # = ЗАДАЧА 1: Выбор максимального количества лекций =
    print("Введите количество лекций:")
    n = int(input())
    lectures = []

    print("Введите время начала и конца каждой лекции (si fi):")
    for _ in range(n):
        s, f = map(int, input().split())
        # Сортировать будем по времени окончания
        lectures.append((f, s))

    # Сортируем по времени окончания
    lectures.sort()

    count = 0
    last_end = -1  # Время окончания последней выбранной лекции

    for finish, start in lectures:
        # Если текущая лекция начинается после окончания предыдущей
        if start >= last_end:
            count += 1
            last_end = finish  # Обновляем время окончания

    print(count)

elif task == 2:
    # = ЗАДАЧА 2: Коробки =
    print("Введите количество коробок:")
    n = int(input())
    boxes = []

    print("Введите вес и грузоподъёмность каждой коробки (w m):")
    for _ in range(n):
        w, m = map(int, input().split())
        boxes.append((w, m))

    # Сортируем по сумме веса и грузоподъёмности (жадный выбор)
    boxes.sort(key=lambda x: x[0] + x[1])

    total_weight_above = 0  # Общий вес всех коробок сверху
    count = 0

    for weight, capacity in boxes:
        # Если текущая коробка может выдержать вес сверху
        if total_weight_above <= capacity:
            count += 1
            total_weight_above += weight  # Добавляем её вес к верхним

    print(count)