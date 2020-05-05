#include <bits/stdc++.h>
using namespace std;

int k, a, b;
bool flag = false;

int main() {
  cin >> k;
  cin >> a >> b;

  for (int i = a; i <= b; i++) {
    if (i % k == 0) {
      flag = true;
    }
  }

  if (flag) {
    printf("OK");
  } else {
    printf("NG");
  }

  return 0;
}