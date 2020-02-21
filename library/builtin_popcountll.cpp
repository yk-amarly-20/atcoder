#include <bits/stdc++.h>
using namespace std;

int main()
{
  // 2進数表記した時、1となるビットの個数を返す

  long long x;
  cin >> x;

  cout << __builtin_popcountll(x) << "\n";
  return 0;
}