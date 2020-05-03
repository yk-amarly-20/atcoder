#include <bits/stdc++.h>
using namespace std;

const int MAX_H = 501;
const int MAX_W = 501;
int h, w;
char maze[MAX_W][MAX_H];
bool isReached[MAX_W][MAX_H];
bool flag = false;

void search(int x, int y);

int main() {
  cin >> h >> w;
  for (int i = 0; i < w; i++) {
    for (int j = 0; j < h; j++) {
      cin >> maze[i][j];
    }
  }

  int sx, sy, gx, gy;
  // "s", "g"の座標を出す
  for (int i = 0; i < w; i++) {
    for (int j = 0; j < h; j++) {
      if (maze[i][j] == 's') {
        sx = i;
        sy = j;
      }
      if (maze[i][j] == 'g') {
        gx = i;
        gy = j;
      }
    }
  }

  search(sx, sy);

  flag = isReached[gx][gy];

  if (flag) {
    printf("Yes");
  } else {
    printf("No");
  }

  return 0;
}

void search(int x, int y) {
  if (x < 0 || x >= w || y < 0 || y >= h || maze[x][y] == '#') 
    return;
  
  if (isReached[x][y])
    return;

  isReached[x][y] = true;

  search(x - 1, y);
  search(x, y - 1);
  search(x + 1, y);
  search(x, y + 1);
}