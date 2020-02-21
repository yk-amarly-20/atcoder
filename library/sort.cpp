#include <bits/stdc++.h>

using namespace std;

int main()
{
  // 配列を小さい順に整列
  // 計算量はO(NlogN)

  int N, b[1009];
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> b[i];
  }

  sort(b, b + N, greater<int>());

  for (int i = 0; i < N; i++)
  {
    cout << b[i] << "\n";
  }

  return 0;
}