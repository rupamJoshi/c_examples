#include<stdio.h>
struct abc {
  char x;
  char y;
};

int main() {
    struct abc g;
    g.x = 'a';
    g.y = 'b';
    printf("%c, %c", g.x, g.y);
    return 0;

}