#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
  cin >> s;
  int a = s[0] - '0';
  int b = s[1] - '0';
  int c = s[2] - '0';
  int d = s[3] - '0';

  if (a + b + c + d == 7) {
    printf("%d %d %d %d", a, b, c, d);
  } else if(a - b + c + d == 7) {
    printf("%d %d %d %d", a, b, c, d);
  } else if (a + b - c + d == 7) {
    printf("%d %d %d %d", a, b, c, d);
  } else if(a + b + c - d == 7) {
    printf("%d %d %d %d", a, b, c, d);
  } else if (a - b - c + d == 7) {
    printf("%d %d %d %d", a, b, c, d);
  } else if (a - b + c - d == 7) {
    printf("%d %d %d %d", a, b, c, d);
  } else if (a + b - c - d == 7) {
    printf("%d %d %d %d", a, b, c, d);
  } else if (a - b - c - d == 7) {
    printf("%d %d %d %d", a, b, c, d);
  }

  return 0;
}