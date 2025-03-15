import sys
input = sys.stdin.readline

n = int(input())
numbers = list(map(int, input().split()))
numbers.sort()

cnt = 0
for idx, number in enumerate(numbers):
  start_idx, end_idx = 0, n - 1

  while start_idx < end_idx:
    sum = numbers[start_idx] + numbers[end_idx]

    if sum == number:
      if start_idx == idx: start_idx += 1
      elif end_idx == idx: end_idx -= 1
      else:
        cnt += 1
        break
    elif sum < number:
      start_idx += 1
    else:
      end_idx -= 1

print(cnt)