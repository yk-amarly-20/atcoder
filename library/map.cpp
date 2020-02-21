#include <bits/stdc++.h>

using namespace std;

int main()
{
  map<string, int> Map;

  Map["qiita"] = 777;
  Map["algorithm"] = 1111;
  Map["競プロ"] = 12094;

  cout << Map["qiita"] << "\n";
  cout << Map["tourist"] << "\n";

  return 0;
}