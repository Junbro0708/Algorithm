def solution(players, m, k):
    answer = 0
    server = []
    
    for player in players:
        server = [val - 1 for val in server]
        server = [val for val in server if val > 0]

        available_players = len(server) * m + m - 1
        if player > available_players:
            temp = available_players
            while temp < player:
                temp += m
                server.append(k)
                answer += 1
    return answer