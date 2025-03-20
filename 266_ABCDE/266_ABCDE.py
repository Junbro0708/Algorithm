import sys
sys.setrecursionlimit(10000)
input = sys.stdin.readline

n, m = map(int, input().split())
flag = False

graph = [[] for _ in range(n)]
isVisited = [False for _ in range(n)]

for i in range(m):
  x, y = map(int, input().split())
  graph[x].append(y)
  graph[y].append(x)

def dfs(node, cnt):
  global flag, isVisited
  if flag: return
  if cnt == 4: flag = True

  for i in graph[node]:
    if isVisited[i]: continue
    isVisited[i] = True
    dfs(i, cnt+1)
    isVisited[i] = False

for i in range(n):
    isVisited[i] = True
    dfs(i, 0)
    isVisited[i] = False

if flag: print(1)
else: print(0)