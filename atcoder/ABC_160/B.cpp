#include <bits/stdc++.h>
using namespace std;

int X;
int ans;

int main() {
  cin >> X;

  ans = (X / 500) * 1000 + ((X % 500) / 5) * 5;

  printf("%d", ans);

  return 0;
}