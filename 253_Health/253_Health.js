function solution(k, dungeons) {
  let answer = Number.MIN_SAFE_INTEGER;
  const visited = new Array(dungeons.length).fill(false);

  const dfs = (health, dungeons, cnt) => {
    answer = Math.max(answer, cnt);

    for (let i = 0; i < dungeons.length; ++i) {
      if (health < dungeons[i][0] || health - dungeons[i][1] < 0 || visited[i])
        continue;
      visited[i] = true;
      dfs(health - dungeons[i][1], dungeons, cnt + 1);
      visited[i] = false;
    }
  };

  dfs(k, dungeons, 0);
  return answer;
}
