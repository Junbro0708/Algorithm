import sys
from collections import deque

input = sys.stdin.readline

n, m = map(int, input().split())
board = []
isVisited = []
dir = [[1, 0], [0, 1], [0, -1], [-1, 0]]

for i in range(n):
  arr = input().rstrip()
  checkedArr = [False for _ in range(m)]
  board.append(arr)
  isVisited.append(checkedArr)

deque = deque()

deque.append([0, 0, 1])
isVisited[0][0] = True

while deque:
  x, y, cnt = deque.popleft()
  if x == n - 1 and y == m - 1:
    print(cnt)
    break

  for d in dir:
    dx, dy = d

    newX = x + dx
    newY = y + dy

    if newX < 0 or newY < 0 or newX >= n or newY >= m or isVisited[newX][newY] or board[newX][newY] == '0': continue
    isVisited[newX][newY] = True
    deque.append([newX, newY, cnt + 1])