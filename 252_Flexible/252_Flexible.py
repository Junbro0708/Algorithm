def solution(schedules, timelogs, startday):
    answer = 0
    
    def convertTime(time):
        h = time // 100
        m = time % 100
        return h * 60 + m
    
    for idx, timelog in enumerate(timelogs):
        s = startday - 1
        flag = True
        for table in timelog:
            s += 1
            if s in [6, 7]:
                continue
            elif s > 7:
                s = 1
                
            if convertTime(table) - convertTime(schedules[idx]) > 10:
                flag = False
        
        if flag:
            answer += 1
            
        
    
    return answer