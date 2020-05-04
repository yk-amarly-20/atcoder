#include <bits/stdc++.h>
using namespace std;

int N, M;
const int MAX_N = 100000;
int H[MAX_N + 1];
bool is_good[MAX_N + 1];
int ans = 0;

int main() {
  cin >> N >> M;
  for (int i = 0; i < N; i++) {
    cin >> H[i];
  }
  fill(is_good, is_good + N, true);

  for (int j = 0; j < M; j++)
  {
    int a, b;
    cin >> a >> b;
    if (H[a - 1] <= H[b - 1]) {
      is_good[a - 1] = false;
    }
    if (H[a-1] >= H[b-1]) {
      is_good[b - 1] = false;
    }
  }

  for (int k = 0; k < n; k++) {
    if (is_good[k]) {
      ans++;
    }
  }

  printf("%d", ans);

  return 0;
}