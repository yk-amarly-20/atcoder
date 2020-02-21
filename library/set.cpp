#include <bits/stdc++.h>
using namespace std;

int main()
{
  // 集合
  // Set と multiSetがある(重複を許すか否か)

  set<int> Set;

  Set.insert(37);
  Set.insert(15);
  Set.insert(37);

  auto itr1 = Set.lower_bound(40); // 二分探索、40より小さい要素を返すイテレータ

  if (itr1 == Set.end())
  {
    cout << "End"
         << "\n";
  }
  else
  {
    cout << (*itr1) << "\n";
  }

  Set.erase(37); // 37を削除,現時点で{15}
  Set.insert(46);
  auto itr2 = Set.lower_bound(20);
  if (itr2 == Set.end())
  {
    cout << "End"
         << "\n";
  }
  else
  {
    cout << (*itr2) << "\n";
  }

  set<int> b;
  int N, a[1000009];

  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < N; i++)
  {
    b.insert(a[i]);
  }
  auto itr = b.begin();
  while (itr != b.end())
  {
    cout << (*itr) << "\n";
    itr++;
  }

  return 0;
}