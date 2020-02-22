#include <bits/stdc++.h>
using namespace std;

const int MAX_A = 1000000000;
int A;
int C[6];
int V[6] = {1, 5, 10, 50, 100, 500};

int main()
{
  // 入力
  cin >> A;
  for (int i = 0; i < 6; i++)
  {
    cin >> C[i];
  }

  int ans = 0;

  for (int i = 5; i >= 0; i--)
  {
    int t = min(C[i], A / V[i]);
    A -= V[i] * t;
    ans += t;
  }

  printf("%d\n", ans);

  return 0;
}
