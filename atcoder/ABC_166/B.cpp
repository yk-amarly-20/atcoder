#include <bits/stdc++.h>
using namespace std;

int N, K;
const MAX_N = 100;
int s[MAX_N + 1];
int ans = 0;

int main() {
  cin >> N >> K;

  for (int i = 0; i < K; i++) {
    int d;
    cin >> d;
    for (int j = 0; j < d; j++) {
      int a;
      cin >> a;
      s[a] = s[a] + 1;
    }
  }

  for (int k = 0; k < N; k++) {
    if (s[k] == 0) {
      ans++;
    }
  }

  printf("%d", ans);

  return 0;
}