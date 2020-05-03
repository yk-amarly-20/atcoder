#include <bits/stdc++.h>
using namespace std;

int n, K;
const int MAX_N = 100000;
vector<int> h;
int dp[MAX_N + 1];

int main()
{
  cin >> n >> K;
  int x;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    h.push_back(x);
  }

  dp[n - 1] = 0;
  dp[n - 2] = abs(h[n - 2] - h[n - 1]);

  for (int i = n - 3; i >= 0; i++)
  {
    x = INT_MAX;

    for (int k = 1; k <= K; k++)
    {
      if (i + k <= n - 1)
      {
        x = min(x, dp[i + k] + abs(h[i] - h[i + k]));
      }
    }

    dp[i] = x;
  }

  printf("%d/n", dp[0]);

  return 0;
}