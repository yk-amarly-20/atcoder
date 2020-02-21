#include <bits/stdc++.h>

using namespace std;

int main()
{
  // 三角関数
  // 使う際は、弧度法を使用

  double PI = M_PI; // 標準に実装されている定数
  double x;
  cin >> x; // xは角度で入力

  printf("%.12lf\n", sin(x / 180 * PI));
  printf("%.12lf\n", cos(x / 180 * PI));
  printf("%.12lf\n", tan(x / 180 * PI));

  return 0;
}