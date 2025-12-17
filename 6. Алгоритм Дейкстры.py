print('Введите номер задачи: 1 (Дейкстра) или 2 (Заправки)')
task = int(input())

if task == 1:
    # = Задача 1: Алгоритм Дейкстры =
    # Ввод: N (число вершин), S (старт), F (финиш)
    n, s, f = map(int, input().split())
    s -= 1  # Индексация с 0
    f -= 1  # Индексация с 0

    # Ввод матрицы смежности
    graph = [list(map(int, input().split())) for _ in range(n)]

    # dist[i] — кратчайшее расстояние от s до i
    dist = [float('inf')] * n
    dist[s] = 0

    # visited[i] — посещена ли вершина i
    visited = [False] * n

    # Основной цикл Дейкстры
    for _ in range(n):
        # Находим непосещенную вершину с минимальным расстоянием
        u = -1
        for i in range(n):
            if not visited[i] and (u == -1 or dist[i] < dist[u]):
                u = i

        # Если не нашли такую вершину, то выходим
        if dist[u] == float('inf'):
            break

        # Отмечаем вершину как посещённую
        visited[u] = True

        # Обновляем расстояния для соседей
        for v in range(n):
            if graph[u][v] != -1 and dist[u] + graph[u][v] < dist[v]:
                dist[v] = dist[u] + graph[u][v]

    # Выводим результат
    print(dist[f] if dist[f] != float('inf') else -1)

else:
    # =Задача 2: Заправки=
    n = int(input())  # Число городов
    cost = list(map(int, input().split()))  # Стоимость бензина в каждом городе
    m = int(input())  # Число дорог

    # Создаём список смежности графа
    graph = [[] for _ in range(n)]
    for _ in range(m):
        a, b = map(int, input().split())
        a -= 1  # Индексация с 0
        b -= 1  # Индексация с 0
        graph[a].append(b)
        graph[b].append(a)

    # dist[i] - минимальная стоимость пути до i-го города
    dist = [float('inf')] * n
    dist[0] = 0  # Начинаем из города 0

    visited = [False] * n

    for _ in range(n):
        # Находим непосещенную вершину с минимальным расстоянием
        u = -1
        for i in range(n):
            if not visited[i] and (u == -1 or dist[i] < dist[u]):
                u = i

        if dist[u] == float('inf'):
            break

        visited[u] = True

        # Обновляем стоимости для соседей
        # В этой задаче стоимость пути - цена бензина в текущем городе
        for v in graph[u]:
            if dist[u] + cost[u] < dist[v]:
                dist[v] = dist[u] + cost[u]

    # Выводим минимальную стоимость до последнего города
    print(dist[n - 1] if dist[n - 1] != float('inf') else -1)