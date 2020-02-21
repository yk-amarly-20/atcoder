#include <bits/stdc++.h>
using namespace std;

int main()
{
  // ビット集合

  string a;
  cin >> a;
  string b;
  cin >> b;

  bitset<2000> a1(a);
  bitset<2000> b1(b);
  bitset<2000> ans = (a1 | b1);

  bool flag = false;

  for (int i = 1999; i >= 0; i--)
  {
    if (ans[i] == 1)
    {
      flag = true;
    }
    if (flag == true)
    {
      cout << ans[i];
    }
  }

  return 0;
}