#include <bits/stdc++.h>
using namespace std;

int n, k;

int main() {
  cin >> n >> k;

  int ans = 0;
  while(n) {
    n /= k;
    ans++;
  }

  printf("%d", ans);

  return 0;
}