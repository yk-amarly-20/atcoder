#include <bits/stdc++.h>

using namespace std;

int main()
{
  // 最大値、最小値

  int N, c[100009], minx = 2147483647;
  cin >> N;

  for (int i = 1; i <= N; i++)
  {
    cin >> c[i];
  }

  for (int i = 1; i <= N; i++)
  {
    minx = min(minx, c[i]);
  }

  cout << minx << "\n";

  // 配列の最小値を計算
  cout << *min_element(c + 1, c + N + 1) << "\n";

  return 0;
}