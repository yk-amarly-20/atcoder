#include <bits/stdc++.h>
using namespace std;

int n;
const int MAX_N = 100;
int d[MAX_N + 1];
int sum = 0;

int main() {
  cin >> n;
  fill(d, d + n, 0);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    d[i] = x;
    sum += x;
  }

  double mean = sum * 1.0 / n;
  int p;

  if ((ceil(mean) - mean) <= (mean - floor(mean))) {
    p = ceil(mean);
  } else {
    p = floor(mean);
  }

  int ans = 0;

  for (int j = 0; j < n; j++)
  {
    ans += pow(p - d[j], 2);
  }
  printf("%d", ans);

  return 0;
}