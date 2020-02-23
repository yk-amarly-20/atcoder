#include <bits/stdc++.h>
using namespace std;

int n;
const int MAX_N = 100;
double x[MAX_N + 1], y[MAX_N];

int main()
{
  // 入力
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x[i] >> y[i];
  }

  double ans = 0;

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      double len = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
      ans = max(len, ans);
    }
  }

  printf("%f\n", ans);

  return 0;
}