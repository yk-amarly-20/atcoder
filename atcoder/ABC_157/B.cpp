#include <bits/stdc++.h>
using namespace std;

int A[3][3];
int n, x;
set<int> b;

int main()
{
  bool flg = false;
  for (int i = 0; i < 3; i++)
  {
    cin >> A[i][0] >> A[i][1] >> A[i][2];
  }

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    b.insert(x);
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      set<int> c = b;
      c.insert(A[i][j]);

      if (c.size() == b.size())
      {
        A[i][j] = 1;
      }
    }
  }

  for (int i = 0; i < 3; i++)
  {
    // 横
    if (A[i][0] + A[i][1] + A[i][2] == 3)
    {
      printf("Yes");
      exit(0);
    }
  }

  for (int i = 0; i < 3; i++)
  {
    if (A[0][i] + A[1][i] + A[2][i] == 3)
    {
      printf("Yes");
      exit(0);
    }
  }

  if ((A[0][0] + A[1][1] + A[2][2] == 3) || (A[0][2] + A[1][1] + A[2][0] == 3))
  {
    printf("Yes");
    exit(0);
  }

  printf("No");

  return 0;
}