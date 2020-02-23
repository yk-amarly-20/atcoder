#include <bits/stdc++.h>
using namespace std;

int n, y;

int main()
{
  cin >> n >> y;

  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; i + j <= n; j++)
    {
      for (int k = 0; i + j + k <= n; k++)
      {
        if (10000 * i + 5000 * j + 1000 * k == y)
        {
          printf("%d %d %d\n", i, j, k);
          exit(1);
        }
      }
    }
  }

  printf("-1 -1 -1\n");

  return 0;
}