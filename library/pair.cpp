#include <bits/stdc++.h>
using namespace std;

int main()
{
  // 異なる二つの型を一つの変数で持てる

  int N;
  pair<int, string> a[100009];

  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> a[i].second;
    cin >> a[i].first;
  }
  sort(a, a + N, greater<pair<int, string>>());
  for (int i = 0; i < N; i++)
  {
    cout << "Name = " << a[i].second << ", Score = " << a[i].first << "\n";
  }

  return 0;
}