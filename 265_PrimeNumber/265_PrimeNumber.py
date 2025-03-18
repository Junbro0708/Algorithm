import sys
import math
sys.setrecursionlimit(10000)
input = sys.stdin.readline

n = int(input())

def isPrime(num):
  for i in range(2, math.floor(math.sqrt(num)) + 1):
    if num % i == 0: return False
  return True

def dfs(num):
  if(len(str(num)) == n): print(num)
  else:
    for i in range(1, 10):
      if i % 2 == 0: continue
      if isPrime(10 * num + i):
        dfs(10 * num + i)

dfs(2)
dfs(3)
dfs(5)
dfs(7)