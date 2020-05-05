#include <bits/stdc++.h>
using namespace std;

int K;
int sum = 0;

int main() {
  cin >> K;

  for (int i = 1; i <= K; i++) {
    for (int j = 1; j <= K; j++) {
      for (int n = 1; n <= K; n++) {
        sum += gcd(gcd(i, j), n);
      }
    }
  }

  printf("%d", sum);

  return 0;
}

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  else
  {
    return gcd(b, a % b);
  }
}