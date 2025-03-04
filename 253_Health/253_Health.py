import sys

def solution(k, dungeons):
    answer = -sys.maxsize
    visited = [False for _ in range(len(dungeons))]
    
    def dfs(health, dungeons, cnt):
        nonlocal answer
        answer = max(answer, cnt)
        
        for idx, dungeon in enumerate(dungeons):
            if(visited[idx] or health < dungeons[idx][0] or health - dungeons[idx][1] < 0):
                continue
            visited[idx] = True
            dfs(health - dungeons[idx][1], dungeons, cnt + 1)
            visited[idx] = False
    
    dfs(k, dungeons, 0)
    return answer