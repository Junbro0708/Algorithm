def convertTime(str):
    [mm, ss] = map(int, str.split(":"))
    return mm * 60 + ss

def solution(video_len, pos, op_start, op_end, commands):
    c_pos = convertTime(pos)
    v_len = convertTime(video_len)
    o_s = convertTime(op_start)
    o_e = convertTime(op_end)
    
    for command in commands:
        if c_pos >= o_s and c_pos <= o_e: c_pos = o_e
        if command == "next": c_pos = min(v_len, c_pos + 10)
        elif command == "prev": c_pos = max(0, c_pos - 10)
        
    if c_pos >= o_s and c_pos <= o_e: c_pos = o_e
        
    return str(c_pos // 60).zfill(2) + ":" + str(c_pos % 60).zfill(2)