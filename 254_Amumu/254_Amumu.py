def solution(bandage, health, attacks):
    answer = health
    turn = attacks[len(attacks) - 1][0]
    
    cnt = 0
    for i in range(1, turn + 1):
        if i == attacks[0][0]:
            answer -= attacks[0][1]
            cnt = 0
            del attacks[0]
        else:
            cnt += 1
            answer += bandage[1]
            if cnt == bandage[0]:
                answer += bandage[2]
                cnt = 0
            if answer > health: answer = health
        
        if answer <= 0: return -1
    
    return answer