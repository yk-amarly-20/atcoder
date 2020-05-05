#include <bits/stdc++.h>
using namespace std;

long long n;

int main() {
  cin >> n;

  long long div_3 = 3 * (n / 3) * (n / 3 + 1) / 2;
  long long div_5 = 5 * (n / 5) * (n / 5 + 1) / 2;
  long long div_15 = 15 * (n / 15) * (n / 15 + 1) / 2;

  long long sum = n * (n + 1) / 2 - div_3 - div_5 + div_15;

  printf("%lld", sum);

  return 0;
}