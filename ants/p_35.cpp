#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 120;
int n, m;
char a[MAX_N][MAX_N];
int ans = 0;

void dfs(int x, int y);

int main()
{

  // 入力
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (a[i][j] == 'W')
      {
        dfs(i, j);
        ans++;
      }
    }
  }

  printf("%d\n", ans);
}

void dfs(int x, int y)
{
  // 座標x, yについて、この座標と繋がっている水たまりを全て地面に変換

  a[x][y] = '.'; // 地面に変換

  for (int dx = -1; dx <= 1; dx++)
  {
    for (int dy = -1; dy <= 1; dy++)
    {
      int nx = x + dx, ny = y + dy;

      if (0 <= nx && nx < n && 0 <= ny && ny < m && a[nx][ny] == 'W')
      {
        dfs(nx, ny);
      }
    }
  }
}