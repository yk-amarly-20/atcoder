#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
  cin >> a >> b >> c;

  if (((a == b) & (a != c)) | ((a == c) & (a != b)) | ((b == c) & (a != b))) {
    printf("Yes");
  } else {
    printf("No");
  }

  return 0;
}