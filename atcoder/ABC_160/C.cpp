#include <bits/stdc++.h>
using namespace std;

int k, n;
const int MAX_N = 200000;
int a[MAX_N];

int main() {
  cin >> k >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int d[n];
  int max_d = 0;
  int sum = 0;

  for (int j = 0; j < n - 1; j++) {
    d[i] = a[j + 1] - a[j];
    sum += d[j];
    if (max_d < d[j])
    {
      max_d = d[j];
    }

    d[n - 1] = a[0] + k - sum;
    if (d[n - 1] < max_d) {
      max_d = d[n - 1];
    }
  }

  printf("%d", k - max_d);

  return 0;
}