#include <bits/stdc++.h>
using namespace std;

int n;
set<string> s;
string x;

int main() {

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    s.insert(x)
  }

  printf("%d\n", s.size());

  return 0;
}