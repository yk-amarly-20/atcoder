#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100;
const int MAX_W = 10000;
int n, W;
int w[MAX_N + 1], v[MAX_W + 1];
int dp[MAX_N + 1][MAX_W + 1];

int rec(int i, int j)
{
  // 再帰的にdpを計算
  // dp[i][j] := i番目以降の品物から、重さjを超えないように品物を選ぶときの価値の最大値
  // 求めたいのはdp[0][W]

  if (dp[i][j] >= 0)
  {
    return dp[i][j]; // すでに更新済みならその値を使う
  }

  int res;

  if (i == n)
  {
    res = 0;
  }
  else if (j < w[i])
  {
    res = rec(i + 1, j);
  }
  else
  {
    res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
  }

  return dp[i][j] = res;
}

int main()
{
  cin >> n >> W;
  for (int i = 0; i < n; i++)
  {
    cin >> w[i] >> v[i];
  }

  memset(dp, -1, sizeof(dp));
  printf("%d\n", rec(0, W));
}