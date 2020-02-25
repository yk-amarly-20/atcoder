#include <bits/stdc++.h>
using namespace std;

int n, k;

int main()
{
  cin >> n >> k;

  if (n >= 10)
  {
    printf("%d\n", k);
  }
  else
  {
    printf("%d\n", k + 100 * (10 - n));
  }

  return 0;
}