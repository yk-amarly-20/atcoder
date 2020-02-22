#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P; // 座標クラス
const int INF = 100000000;
const int MAX_N = 120, MAX_M = 120;
char maze[MAX_N][MAX_M];
int n, m;
int sx, sy;          // スタート位置
int gx, gy;          // ゴール位置
int d[MAX_N][MAX_M]; // 最短距離配列

int bfs();

int main()
{
  // 入力
  cin >> n >> m >> sx >> sy >> gx >> gy;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> maze[i][j];
    }
  }

  int ans = bfs();
  printf("%d\n", ans);
  return 0;
}

int bfs()
{
  // 幅優先探索
  queue<P> q;
  int dx[4] = {0, 0, 1, -1}, dy[4] = {-1, 1, 0, 0};

  q.push(P(sx, sy)); // 初期位置格納
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      d[i][j] = INF;
    }
  }

  d[sx][sy] = 0;

  while (q.size())
  { // qのサイズが0出ない限り
    P p = q.front();
    q.pop();

    if (p.first == gx && p.second == gy)
    {
      break;
    }

    for (int i = 0; i < 4; i++)
    {
      int nx = p.first + dx[i], ny = p.second + dy[i];

      if (0 <= nx && nx < n && 0 <= ny && ny < m && maze[nx][ny] != '#' && d[nx][ny] == INF)
      {
        q.push(P(nx, ny));
        d[nx][ny] = d[p.first][p.second] + 1;
      }
    }
  }

  return d[gx][gy];
}