#include <bits/stdc++.h>
using namespace std;

int s, w;

int main() {
  cin >> s >> w;

  if (w >= s) {
    printf("unsafe");
  }
  else {
    printf("safe");
  }
}