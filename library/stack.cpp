#include <bits/stdc++.h>

using namespace std;

int main()
{
  // 最新のものを取り出す
  // 実質vectorの下位互換

  stack<int> a;
  int N, b;

  a.push(179);
  a.push(19);
  a.push(78);
  int x = a.top();

  a.pop();
  a.pop();

  cout << x << "\n";

  return 0;
}