#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x, cnt, a[100009];

  cin >> n >> x;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  assert(n <= 10000); // n > 10000ならランタイムエラー

  for (int i = 1; i < n; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {
      if (a[i] + a[j] == x)
      {
        cnt++;
      }
    }
  }

  cout << cnt << "\n";

  return 0;
}