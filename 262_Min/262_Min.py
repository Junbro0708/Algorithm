from collections import deque
import sys
input = sys.stdin.readline

N, L = map(int, input().split())
numbers = list(map(int, input().split()))
window = deque()

for (i, num) in enumerate(numbers):
  while window and window[-1][1] > num:
    window.pop()
  window.append((i, num))
  if window[0][0] < i - L + 1: window.popleft()
  print(window[0][1], end=' ')