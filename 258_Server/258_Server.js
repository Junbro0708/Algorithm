function solution(players, m, k) {
  let answer = 0;
  let server = [];

  for (const player of players) {
    server.forEach((val, idx) => server[idx]--);
    server = server.filter((val) => val > 0);

    const available_players = server.length * m + m - 1;
    if (player > available_players) {
      let temp = available_players;
      while (temp < player) {
        server.push(k);
        temp += m;
        answer++;
      }
    }
  }
  return answer;
}
