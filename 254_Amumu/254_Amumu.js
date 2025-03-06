function solution(bandage, health, attacks) {
  let answer = health;
  const turn = attacks[attacks.length - 1][0];

  let cnt = 0;
  for (let i = 0; i < turn; ++i) {
    if (i + 1 === attacks[0][0]) {
      answer -= attacks[0][1];
      cnt = 0;
      attacks.shift();
    } else {
      cnt++;
      answer += bandage[1];

      if (cnt === bandage[0]) {
        answer += bandage[2];
        cnt = 0;
      }

      if (answer >= health) answer = health;
    }

    if (answer <= 0) return -1;
  }
  return answer;
}
