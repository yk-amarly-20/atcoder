#include <bits/stdc++.h>
using namespace std;

int n;
const int MAX_N = 200000;
int d[MAX_N + 1];

int main() {
  cin >> n;
  fill(d, d + n, 0);

  for (int i = 2; i <= n; i++)
  {
    int c;
    cin >> c;
    d[c]++;
  }

  for (int j = 1; j <= n; j++) {
    printf("%d\n", d[j]);
  }

  return 0;
}