#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;

int main() {

  cin >> a >> b >> c >> d;

  while (true) {

    c = c - b;
    if (c <= 0) {
      printf("Yes");
      break;
    }
    a = a - d;
    if (a < 0) {
      printf("No");
      break;
    }
  
  }
}