#include <bits/stdc++.h>
using namespace std;

int N, M;
const int MAX_M = 10000;
int rec = 0;

int main() {
  cin >> N >> M;

  for (int i = 0; i < M; i++) {
    int a;
    cin >> a;
    rec += a;
  }

  int ans = N - rec;

  if (ans >= 0) {
    printf("%d", ans);
  } else {
    printf("-1");
  }

  return 0;
}