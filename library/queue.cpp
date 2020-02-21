#include <bits/stdc++.h>

using namespace std;

int main()
{
  // 一番古い要素を取り出す

  queue<int> a;
  a.push(179);
  a.push(173);
  a.push(156);
  int x1 = a.front();
  a.pop();
  a.push(117);
  a.push(202);
  int x2 = a.front();
  a.pop();
  int x3 = a.front();
  int x4 = a.size();
  int x5 = 0;
  if (a.empty())
    x5 = 10000;

  cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << endl;
  return 0;
}