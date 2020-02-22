#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100000;
const int MAX_T = 1000000000;
int n;
int s[MAX_N + 1], t[MAX_N + 1];
pair<int, int> p[MAX_N + 1];

int main()
{
  // 入力
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> s[i] >> t[i];
    p[i].first = t[i];
    p[i].second = s[i];
  }

  sort(p, p + n);
  int ans = 0;
  int t = 0;

  for (int i = 0; i < n; i++)
  {
    if (t < p[i].second)
    {
      t = p[i].first;
      ans++;
    }
  }

  printf("%d\n", ans);

  return 0;
}