#include <bits/stdc++.h>

int a, b, c, d;

int gcd(int x, int y);

int main() {
  cin >> a >> b >> c >> d;

  int ans = gcd(abs(a - c), abs(b - d));

  printf("%d", ans);

  return 0;
}

int gcd(int x, int y) {
  // 最大公約数を算出

  if (y == 0) {
    return x;
  }
  else
  {
    return (y, x % y);
  }
}