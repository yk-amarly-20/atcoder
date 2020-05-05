#include <bits/stdc++.h>
using namespace std;

long long n, a, b;

int main() {
  cin >> n >> a >> b;

  long long ans, div, res;
  div = n / (a + b);
  res = n % (a + b);

  if (res >= a) {
    res = a;
  }

  ans = div + res;
  printf("%llu", ans);
  return 0;
}