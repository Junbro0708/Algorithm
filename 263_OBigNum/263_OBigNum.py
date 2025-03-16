import sys
input = sys.stdin.readline
n = int(input())
numbers = list(map(int, input().split()))
stack = []
answer = [-1] * n

for idx, num in enumerate(numbers):
  while stack and numbers[stack[-1]] < num:
    answer[stack[-1]] = num
    stack.pop()
  stack.append(idx)

for num in answer: print(num, end=' ')