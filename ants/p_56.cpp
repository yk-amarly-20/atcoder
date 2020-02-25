#include <bits/stdc++.h>
using namespace std;

int n, m;
const int MAX_N = 1000, MAX_M = 1000;
int dp[MAX_N + 1][MAX_M + 1];
string s, t;

int main()
{
  cin >> n >> m;
  cin >> s >> t;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (s[i] == t[j])
      {
        dp[i + 1][j + 1] = dp[i][j] + 1;
      }
      else
      {
        dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
      }
    }
  }

  printf("%d\n", dp[n][m]);

  return 0;
}
