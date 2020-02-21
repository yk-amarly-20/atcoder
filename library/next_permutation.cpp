#include <bits/stdc++.h>
using namespace std;

int main()
{
  // 順列を生成

  // n個の都市が存在して、都市iからjに移動するのにかかる時間はa[i][j]
  // 全ての都市を訪れるのに何分かかるか？

  int n, A[12][12], B[12], ans = 2000000;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> A[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    B[i] = i + 1;
  }

  do
  {
    int sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
      sum += A[B[i]][B[i + 1]];
    }
    ans = min(ans, sum);
  } while (next_permutation(B, B + n));

  cout << ans << "\n";

  return 0;
}