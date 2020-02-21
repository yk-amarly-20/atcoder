#include <bits/stdc++.h>

using namespace std;

int main()
{
  // ヒープキュー
  // ソート早い(最大、最小の値をO(logN)で計算)

  priority_queue<int, vector<int>, greater<int>> q1; // 小さい値を取り出す

  priority_queue<int, vector<int>, less<int>> q2; // 大きい値wど取り出す

  q1.push(126);
  q1.push(43);
  q1.push(85);

  int x = q1.top();
  q1.pop();

  cout << x << "\n";

  return 0;
}