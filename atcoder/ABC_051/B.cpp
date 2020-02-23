#include <bits/stdc++.h>
using namespace std;

int k, s;
int main()
{
  // 入力
  cin >> k >> s;

  int ans = 0;

  for (int x = 0; x <= k; x++)
  {
    for (int y = 0; y <= k; y++)
    {
      if (0 <= s - x - y && k >= s - x - y)
      {
        ans++;
      }
    }
  }

  printf("%d\n", ans);

  return 0;
}