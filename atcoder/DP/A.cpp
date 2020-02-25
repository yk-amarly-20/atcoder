#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100000;
int h[MAX_N + 1];
int n;
int dp[MAX_N + 1];

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> h[i];
  }

  dp[n - 1] = 0;
  dp[n - 2] = abs(h[n - 1] - h[n - 2]);
  dp[n - 3] = abs(h[n - 1] - h[n - 3]);

  for (int i = n - 4; i >= 0; i--)
  {
    dp[i] = min(dp[i + 1] + abs(h[i] - h[i + 1]), dp[i + 2] + abs(h[i + 2] - h[i]));
  }

  printf("%d\n", dp[0]);

  return 0;
}