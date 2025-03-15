import sys
input = sys.stdin.readline

s, p = map(int, input().split())
words = input()
condition = list(map(int, input().split())) # A C G T

isChecked = [0] * 4
cnt = 0

def addWord(word):
  global isChecked
  if word == 'A':
    isChecked[0] += 1
  elif word == 'C':
    isChecked[1] += 1
  elif word == 'G':
    isChecked[2] += 1
  elif word == 'T':
    isChecked[3] += 1

def removeWord(word):
  global isChecked
  if word == 'A':
    isChecked[0] -= 1
  elif word == 'C':
    isChecked[1] -= 1
  elif word == 'G':
    isChecked[2] -= 1
  elif word == 'T':
    isChecked[3] -= 1

def compare():
  global cnt
  flag = True
  for j in range(4):
    if isChecked[j] < condition[j]:
      flag = False
      break

  if flag: cnt += 1

for i in range(0, p):
  addWord(words[i])

end_idx = p
for i in range(0, s - p + 1):
  compare()
  removeWord(words[i])
  addWord(words[end_idx])
  end_idx += 1

print(cnt)