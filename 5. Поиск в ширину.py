from collections import deque

# Граф лабиринта: каждая комната и её соседи
graf = {
    'S': ['A', 'B', 'E', 'D'],
    'A': ['S'],
    'B': ['S', 'C', 'D'],
    'C': ['B', 'J'],
    'D': ['B', 'G', 'S'],
    'E': ['S', 'G'],
    'F': ['G', 'H'],
    'G': ['E', 'D', 'F', 'H', 'J'],
    'H': ['F', 'G', 'I'],
    'I': ['H', 'J'],
    'J': ['I', 'G', 'C']
}

def shortest(start, end):
    # Создаем очередь для BFS
    queue = deque()
    # Начинаем с первого пути (только стартовая комната)
    queue.append([start])
    # Отмечаем, какие комнаты уже посетили
    visited = {start}

    while queue:
        # Первый путь из очереди
        path = queue.popleft()
        # Последняя комната в пути
        current_room = path[-1]

        # Если дошли до конца возвращаем путь
        if current_room == end:
            return path

        # Перебираем соседей текущей комнаты
        for neighbor in graf[current_room]:
            # Если соседа ещё не посещали
            if neighbor not in visited:
                # Отмечаем его как посещённого
                visited.add(neighbor)
                # Создаем новый путь, добавляя соседа
                new_path = list(path)
                new_path.append(neighbor)
                # Добавляем новый путь в очередь
                queue.append(new_path)

    # Если путь не найден
    return None

# Задаем начальную и конечную точки
start_room = 'S'
end_room = 'I'

# Запускаем поиск
result = shortest(start_room, end_room)

if result:
    print("Кратчайший путь:")
    print(" -> ".join(result))  # Выводим путь стрелками
    print(f"Длина пути: {len(result) - 1} шагов")  # Длина (количество переходов)
else:
    print("Путь не найден.")