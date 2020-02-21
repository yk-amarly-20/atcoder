#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N, b[1009];

  cin >> N;

  for (int i = 0; i <= N; i++)
  {
    cin >> b[i];
  }

  reverse(b, b + N);

  for (int i = 0; i <= N; i++)
  {
    cout << b[i] << "\n";
  }

  return 0;
}