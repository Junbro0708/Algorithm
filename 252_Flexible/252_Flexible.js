function solution(schedules, timelogs, startday) {
  let answer = 0;

  timelogs.map((timelog, idx) => {
    let flag = true,
      day = startday - 1;

    for (const table of timelog) {
      day++;
      if (day === 6 || day === 7) continue;

      const tHour = Math.floor(Number(table) / 100),
        tMinute = Number(table) % 100;
      const sHour = Math.floor(Number(schedules[idx]) / 100),
        sMinute = Number(schedules[idx] % 100);
      const diff = (tHour - sHour) * 60 + (tMinute - sMinute);
      if (diff > 10) flag = false;

      if (day > 7) day = 1;
    }
    if (flag) answer++;
  });
  return answer;
}
