#include <bits/stdc++.h>
using namespace std;

int a, b;

int main() {
  cin >> a >> b;

  bool flag = true;
  int price = 1;
  int ans = -1;
  while (flag | price == 10000)
  {
    if ((floor(price * 0.08) == a) & (floor(price * 0.1) == b)) {
      ans = price;
      flag = false;
    }
  }

  printf("%d", ans);

  return 0;
}