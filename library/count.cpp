#include <bits/stdc++.h>
using namespace std;

int main()
{
  // 配列やvectorのある区間内にxがいくつあるのかカウント

  int a[100009], n, q;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  cin >> q;

  for (int i = 0; i <= q; i++)
  {
    int l, r, x;
    cin >> l >> r >> x;
    cout << count(a + l, a + r + 1, x) << "\n";
  }

  return 0;
}