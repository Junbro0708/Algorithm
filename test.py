import sys
input = sys.stdin.readline

dNum, qNum = map(int, input().split())
numbers = list(map(int, input().split()))

preSum = [0] * (dNum + 1)
preSum[0] = 0
for idx in range(1, len(preSum)):
    preSum[idx] = preSum[idx - 1] + numbers[idx - 1]

for i in range(0, qNum):
    s, e = map(int, input().split())
    print(preSum[e] - preSum[s - 1])