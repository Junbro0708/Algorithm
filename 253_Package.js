function solution(n, w, num) {
  const arr = [];

  for (let i = 0; i < w; ++i) {
    arr.push(new Array());
  }

  let j = 0,
    cnt = 0;
  for (let i = 0; i < n; ++i) {
    if (j === w) {
      j = 0;
      cnt++;
    }

    switch (cnt % 2) {
      case 0:
        arr[j].push(i + 1);
        break;
      case 1:
        arr[Math.abs(j - w + 1)].push(i + 1);
        break;
    }

    j++;
  }

  let answer = 0;
  arr.map((items) => {
    items.map((item, idx) => {
      if (item === num) {
        answer = items.length - idx;
        return;
      }
    });
  });

  return answer;
}

console.log(solution(22, 6, 8));
