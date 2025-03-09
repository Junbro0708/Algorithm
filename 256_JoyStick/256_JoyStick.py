def solution(name):
    answer = 0
    
    move = len(name) - 1
    y = 0
    for idx, word in enumerate(name):
        answer += min(ord(word) - ord('A'), abs(ord('Z') - ord(word) + 1))
        y = idx + 1
        while y < len(name) and name[y] == 'A': y += 1
        move = min(move, min(idx + idx + len(name) - y, len(name) - y + len(name) - y + idx))

    return answer + move