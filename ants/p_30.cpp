#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100000000;
int a[MAX_N], n, k;
bool dfs(int i, int sum);

int main()
{
  // 入力
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  if (dfs(0, 0))
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }

  return 0;
}

bool dfs(int i, int sum)
{
  // 再帰定義

  if (i == n)
  {
    return sum == k;
  }

  if (dfs(i + 1, sum + a[i]))
  { // a[i]を使う場合
    return true;
  }

  if (dfs(i + 1, sum))
  { // a[i]を使わない場合
    return true;
  }

  return false;
}
