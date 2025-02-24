function solution(today, terms, privacies) {
  var answer = [];

  privacies.map((privacy, index) => {
    const [date, type] = privacy.split(" ");
    const [year, month, day] = date.split(".");
    const [tYear, tMonth, tDay] = today.split(".");

    const duration =
      Number(tYear - year) * 12 * 28 +
      Number(tMonth - month) * 28 +
      Number(tDay - day);

    terms.map((term) => {
      const [targetType, targetMonth] = term.split(" ");

      if (targetType === type && duration >= targetMonth * 28) {
        answer.push(index + 1);
      }
    });
  });
  return answer;
}

console.log(
  solution(
    "2020.01.01",
    ["Z 3", "D 5"],
    [
      "2019.01.01 D",
      "2019.11.15 Z",
      "2019.08.02 D",
      "2019.07.01 D",
      "2018.12.28 Z",
    ]
  )
);
