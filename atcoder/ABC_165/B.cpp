#include <bits/stdc++.h>
using namespace std;

double X;
int ans = 0;

int main() {
  cin >> X;

  long p = 100;   // 現在の所持金
  
  while (p < X)
  {
    p = ceil(p * 0.01) + p;
    ans++;
  }

  printf("%d", ans);

  return 0;
}