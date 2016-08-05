#include <iostream>
#include <cstring>

using namespace std;

struct Point {
  int x, y;  
};

struct Figure {
  Point p1;
  Point p2;
};

int main() {
  Figure line;
  Figure rect;

  scanf("%d %d %d %d %d %d %d %d",
    &line.p1.x,
    &line.p1.y,
    &line.p2.x,
    &line.p2.y,
    &rect.p1.x,
    &rect.p1.y,
    &rect.p2.x,
    &rect.p2.y
  );

  printf("%d-%d-%d-%d-%d-%d-%d-%d", 
    line.p1.x,
    line.p1.y,
    line.p2.x,
    line.p2.y,
    rect.p1.x,
    rect.p1.y,
    rect.p2.x,
    rect.p2.y);

  return 0;
}
