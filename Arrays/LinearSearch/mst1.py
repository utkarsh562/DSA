[-
 ]

import heapq

def astar_search(graph, start, goal, heuristic):
    open_list = [(0 + heuristic[start], start)]  # Priority queue with f(n) = g(n) + h(n)
    closed_set = set()
    came_from = {}
    g_score = {node: float('inf') for node in graph}
    g_score[start] = 0

    while open_list:
        current_cost, current_node = heapq.heappop(open_list)

        if current_node == goal:
            path = reconstruct_path(came_from, goal)
            return path

        closed_set.add(current_node)

        for neighbor, cost in graph[current_node]:
            if neighbor in closed_set:
                continue

            tentative_g_score = g_score[current_node] + cost

            if tentative_g_score < g_score[neighbor]:
                came_from[neighbor] = current_node
                g_score[neighbor] = tentative_g_score
                f_score = tentative_g_score + heuristic[neighbor]
                heapq.heappush(open_list, (f_score, neighbor))

    return None

def reconstruct_path(came_from, current_node):
    path = []
    while current_node in came_from:
        path.insert(0, current_node)
        current_node = came_from[current_node]
    path.insert(0, current_node)
    return path


graph = {
    'A': [('B', 5), ('C', 3)],
    'B': [('A', 5), ('D', 8), ('E', 2)],
    'C': [('A', 3), ('F', 4)],
    'D': [('B', 8)],
    'E': [('B', 2), ('F', 6)],
    'F': [('C', 4), ('E', 6)]
}

heuristic = {
    'A': 10,
    'B': 7,
    'C': 8,
    'D': 6,
    'E': 5,
    'F': 3
}

start_node = 'A'
goal_node = 'F'

print("A* Path:")
path = astar_search(graph, start_node, goal_node, heuristic)
if path:
    print(path)
else:
    print("Path not found")