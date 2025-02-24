function solution(friends, gifts) {
  var answer = 0;
  const chart = [];
  const score = new Array(friends.length).fill(0);
  const final = new Array(friends.length).fill(0);

  for (let i = 0; i < friends.length; i++) {
    chart.push(new Array(friends.length).fill(0));
  }

  gifts.map((gift) => {
    const [from, to] = gift.split(" ");
    const from_index = friends.indexOf(from);
    const to_index = friends.indexOf(to);

    chart[from_index][to_index] += 1;
    score[from_index] -= 1;
    score[to_index] += 1;
  });

  for (let i = 0; i < final.length; ++i) {
    for (let j = 0; j < final.length; ++j) {
      if (i === j) continue;

      if (chart[i][j] > chart[j][i]) final[i] += 1;
      else if (chart[i][j] === chart[j][i]) {
        if (score[i] < score[j]) final[i] += 1;
      }
    }
  }
  return Math.max(...final);
}

console.log(
  solution(
    ["muzi", "ryan", "frodo", "neo"],
    [
      "muzi frodo",
      "muzi frodo",
      "ryan muzi",
      "ryan muzi",
      "ryan muzi",
      "frodo muzi",
      "frodo ryan",
      "neo muzi",
    ]
  )
);
