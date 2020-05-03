#include <bits/stdc++.h>
using namespace std;

int n, m;
pair<int, int> p, q;
vector<pair<int, int>> v;

int main()
{
  cin >> n >> m;

  for (int i = 0; i < m; i++)
  {
    cin >> p.first >> p.second;
    v.push_back(p);
  }

  sort(v.begin(), v.end());

  p = v[0];
  for (int i = 1; i < m; i++)
  {
    q = v[i];
    if ((p.first == q.first) == (p.second != q.second))
    {
      printf("-1\n");
      exit(0);
    }

    p = v[i];
  }

  string s;
  for (int i = 0; i < n; i++)
  {
    s + "0";
  }

  printf("%s\n", s);

  for (int i = 0; i < m; i++)
  {
    p = v[i];
    s[p.first - 1] = to_string(p.second);
  }

  string c = s[0];

  if (c == "0")
  {
    printf("-1\n");
    exit(0);
  }
  string s1;

  for (int i = 0; i < n; i++)
  {
    s1 + s[i];
  }
  printf("%s\n", s1);
  int num = stoi(s1);
  printf("%d\n", num);

  return 0;
}
