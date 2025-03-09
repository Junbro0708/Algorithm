function solution(name) {
  let answer = 0;
  const dict = {};

  // char 인덱스 정의
  const alphabet = [
    "A",
    "B",
    "C",
    "D",
    "E",
    "F",
    "G",
    "H",
    "I",
    "J",
    "K",
    "L",
    "M",
    "N",
    "O",
    "P",
    "Q",
    "R",
    "S",
    "T",
    "U",
    "V",
    "W",
    "X",
    "Y",
    "Z",
  ];
  alphabet.map((idx, val) => (dict[idx] = val));

  // 알파벳을 앞으로 돌지 뒤로 돌지 판별
  for (const word of name)
    answer += Math.min(dict[word], Math.abs(26 - dict[word]));

  // 경우의 수 1. 그냥 순회 2. 오른쪽으로 갔다가 뒤로 가기 3. 왼쪽으로 갔다가 오른쪽으로 가기
  let move = name.length - 1; // 1번
  let j = 0;
  for (let i = 0; i < name.length; ++i) {
    j = i + 1; // 현재 인덱스 다음부터 A가 아닌 인덱스
    while (j < name.length && dict[name[j]] === dict["A"]) j++;
    move = Math.min(
      move,
      Math.min(
        i + i + (name.length - j),
        name.length - j + (name.length - j) + i
      )
    );
  }

  return answer + move;
}
