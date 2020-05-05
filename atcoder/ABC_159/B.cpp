#include <bits/stdc++.h>
using namespace std;

string s;

bool is_palindrome(string txt);

int main() {
  cin >> s;

  int n = s.length();

  if (n == 3) {
    if (is_palindrome(s)) {
      printf("Yes");
    } else {
      printf("No");
    }

    return 0;
  }

  string sub_1 = s.substr(0, (n - 1) / 2);
  string sub_2 = s.substr((n + 1) / 2, (n - 1) / 2);

  if (is_palindrome(s) & is_palindrome(sub_1) & is_palindrome(sub_2)) {
    printf("Yes");
  } else {
    printf("No");
  }

  return 0;
}

bool is_palindrome(string txt) {
  // 回文かチェック
  string r_txt;
  r_txt = txt;
  reverse(r_txt.begin(), r_txt.end());
  if (txt == r_txt) {
    return true;
  } else {
    false;
  }
}