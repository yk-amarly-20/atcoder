#include <bits/stdc++.h>
using namespace std;

int main()
{
  // 二分探索 O(logN)
  // a[i] < x となるiがいくつ存在するか出力
  int N, a[100009];
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> a[i];
  }
  sort(a, a + N);

  int x;
  cin >> x;
  cout << lower_bound(a, a + N, x) - a << "\n";
  return 0;
}