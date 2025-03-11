import sys
input = sys.stdin.readline

num_q, que_q = map(int, input().split())
numbers = []
for i in range(0, num_q):
  temp_arr = list(map(int, input().split()))
  numbers.append(temp_arr)

preSum = [[0] * len(numbers[0]) for _ in range(len(numbers))]
preSum[0][0] = numbers[0][0]
for i in range(len(numbers)):
  for j in range(len(numbers[0])):
    if i == 0: preSum[i][j] = preSum[i][j - 1] + numbers[i][j]
    if j == 0: preSum[i][j] = preSum[i - 1][j] + numbers[i][j]
    if i > 0 and j > 0: preSum[i][j] = preSum[i][j - 1] + preSum[i - 1][j] - preSum[i - 1][j - 1] + numbers[i][j]

for i in range(0, que_q):
  x1, y1, x2, y2 = map(int, input().split())
  sum = preSum[x2 - 1][y2 - 1]
  if y1 > 1: sum -= preSum[x2 - 1][y1 - 1 - 1]
  if x1 > 1: sum -= preSum[x1 - 1 - 1][y2 - 1]
  if x1 > 1 and y1 > 1: sum += preSum[x1 - 1 - 1][y1 - 1 - 1]
  print(sum)