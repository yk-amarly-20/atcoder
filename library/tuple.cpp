#include <bits/stdc++.h>
using namespace std;

int main()
{
  // tuple: 3つ以上の要素を一度に持てる

  tuple<int, int, int> A;

  cin >> get<0>(A) >> get<1>(A) >> get<2>(A);
  cout << get<0>(A) + get<1>(A) + get<2>(A) << "\n";

  // vectorにも突っ込めたりする
  vector<tuple<double, int, int>> B;
  int N;

  cin >> N;

  for (int i = 0; i < N; i++)
  {
    double p1;
    int p2, p3;
    cin >> p1 >> p2 >> p3;
    B.push_back(make_tuple(p1, p2, p3));
  }

  sort(B.begin(), B.end());

  for (int i = 0; i < N; i++)
  {
    cout << get<0>(B[i]) << " " << get<1>(B[i]) << " " << get<2>(B[i]) << "\n";
  }
  return 0;
}