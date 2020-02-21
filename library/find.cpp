#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, q, a[1009];

  cin >> n;

  for (int i = 0; i <= n; i++)
  {
    cin >> a[i];
  }

  cin >> q;

  for (int i = 0; i <= q; i++)
  {
    int l, r, x;
    cin >> l >> r >> x;
    int f = find(a + l, a + r + 1, x) - a;
    if (f == r + 1)
    {
      cout << "-1"
           << "\n";
    }
    else
    {
      cout << f << "\n";
    }
  }

  return 0;
}