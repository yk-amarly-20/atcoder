#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> a;
  int N, b;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> b;
    a.push_back(b);
  }

  a.push_back(121);

  sort(a.begin(), a.end()); // ソート

  for (int i = 0; i < N; i++)
  {
    cout << a[i] << "\n";
  }

  return 0;
}