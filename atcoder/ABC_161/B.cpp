#include <bits/stdc++.h>
using namespace std;

int n, m;
const int MAX_N = 100;
int d[MAX_N + 1];
int sum = 0;

int main() {
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> d[i];
    sum += d[i];
  }

  sort(d, d + n, greater<int>);

  if (d[m - 1] >= sum / (4.0 * m)) {
    printf("Yes");
  } else {
    printf("No");
  }

  return 0;
}