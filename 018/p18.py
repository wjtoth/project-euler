import sys

weights = [0]
n=0
for line in sys.stdin:
    n+=1
    for token in line.split():
        weights.append(-1 * int(token))
    
graph = {0:[1]}
level = 1
count = 1
for (index, weight) in enumerate(weights):
    if index == 0:
        continue
    if index >= len(weights) - n:
       graph[index] = []
    else:
        graph[index] = [level + index, level + index + 1]
    if count == level:
        level += 1
        count = 0
    count += 1

#acyclic sp algorithm
d = [0 for i in weights]
p = [None for i in weights]

for u in range(0, len(weights)):
    for v in graph[u]:
        w = weights[v]
        if d[v] > d[u] + w:
            d[v] = d[u] + w
            p[v] = u

min_index = 0
for index in graph:
    if d[index] < d[min_index]:
        min_index = index
print(-1*d[min_index])
