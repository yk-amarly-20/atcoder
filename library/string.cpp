#include <bits/stdc++.h>

using namespace std;

int main()
{
  // 文字列

  string a, b;
  cin >> a >> b;

  string c = a + b; // 連結

  if (c.size() <= 10)
  {
    cout << c << "\n";
  }
  else
  {
    cout << c.substr(0, 10) << "\n";
  }

  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i += 2)
  {
    cout << s << "\n";
  }

  return 0;
}