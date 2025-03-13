import sys
input = sys.stdin.readline

answer = 0
m, n = map(int, input().split())
numbers = list(map(int, input().split()))
spatial_sum = [0] * m
modified_sum = [0] * n

spatial_sum[0] = numbers[0]
for i in range(1, len(numbers)):
  spatial_sum[i] = numbers[i] + spatial_sum[i - 1]

for sum in spatial_sum:
  if sum % n == 0: answer += 1
  modified_sum[sum % n] += 1

for sum in modified_sum:
  answer += sum * (sum - 1) // 2

print(answer)