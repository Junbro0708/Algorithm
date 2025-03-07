function solution(video_len, pos, op_start, op_end, commands) {
  const convertTime = (str) => {
    const [mm, ss] = str.split(":");
    return Number(mm) * 60 + Number(ss);
  };

  const v_len = convertTime(video_len);
  const o_start = convertTime(op_start);
  const o_end = convertTime(op_end);

  let c_pos = convertTime(pos);

  for (const command of commands) {
    if (c_pos < 0) c_pos = 0;
    if (c_pos > v_len) c_pos = v_len;
    if (c_pos >= o_start && c_pos <= o_end) c_pos = o_end;

    switch (command) {
      case "next":
        c_pos += 10;
        break;
      case "prev":
        c_pos -= 10;
        break;
    }
  }

  if (c_pos < 0) c_pos = 0;
  if (c_pos > v_len) c_pos = v_len;
  if (c_pos >= o_start && c_pos <= o_end) c_pos = o_end;

  const mm = Math.floor((c_pos / 60).toString());
  const ss = (c_pos % 60).toString();

  return String(mm).padStart(2, "0") + ":" + String(ss).padStart(2, "0");
}
