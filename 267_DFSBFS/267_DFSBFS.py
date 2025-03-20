from collections import deque
import sys
sys.setrecursionlimit(10000)

input = sys.stdin.readline

n, m, v = map(int, input().split())
graph = [[] for _ in range(n + 1)]
isVisited = [False for _ in range(n + 1)]

for i in range(m):
  a, b = map(int, input().split())
  graph[a].append(b)
  graph[b].append(a)

for i in graph:
  i.sort()

# DFS
def dfs(node):
  print(node, end=' ')

  for i in graph[node]:
    if isVisited[i]: continue
    isVisited[i] = True
    dfs(i)

isVisited[v] = True
dfs(v)

# BFS
print()
isVisited = [False for _ in range(n + 1)]

stack = deque()
stack.append(v)
isVisited[v] = True

while stack:
  node = stack.popleft()
  print(node, end=' ')
  
  for i in graph[node]:
    if isVisited[i]: continue
    isVisited[i] = True
    stack.append(i)