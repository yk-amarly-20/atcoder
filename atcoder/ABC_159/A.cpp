#include <bits/stdc++.h>
using namespace std;

int n, m;
int ans;

int main() {
  cin >> n >> m;

  ans = n * (n - 1) / 2 + m * (m - 1) / 2;

  printf("%d", ans);

  return 0;
}
