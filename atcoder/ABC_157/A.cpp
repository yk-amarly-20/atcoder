#include <bits/stdc++.h>
using namespace std;

int n;
int ans;

int main()
{
  cin >> n;

  ans = n / 2 + n % 2;

  printf("%d\n", ans);

  return 0;
}