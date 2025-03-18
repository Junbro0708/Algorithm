import sys
input = sys.stdin.readline
sys.setrecursionlimit(10000)

N, M = map(int, input().split())
graph = [[] for _ in range(1001)]
isVisited = [False] * 1001
answer = 0

for i in range(M):
  x, y = map(int, input().split())
  graph[x].append(y)
  graph[y].append(x)

def dfs(node):
  isVisited[node] = True

  for i in graph[node]:
    if not isVisited[i]:
      dfs(i)
  return

for i in range(1, N + 1):
  if not isVisited[i]:
    dfs(i)
    answer += 1

print(answer)