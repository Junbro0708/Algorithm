def solution(n):
    num = 1
    type = 1
    idx = 0
    arr = [[] for _ in range(n)]
    answer = []
    
    while n >= 0:
      if type % 3 == 1:
        for _ in range(0, n):
            arr[idx].insert(type // 3, num)
            num += 1
            idx += 1
        idx -= 1
      elif type % 3 == 2:
        for i in range(1, n + 1):
            arr[idx].insert(type // 3 + i, num)
            num += 1
        idx -= 1
      elif type % 3 == 0:
        for _ in range(0, n):
            arr[idx].insert(len(arr[idx]) - type // 3 + 1, num)
            num += 1
            idx -= 1
        idx += 2
      n -= 1
      type += 1
    
    for i in arr:
       for j in i:
          answer.append(j)

    return answer