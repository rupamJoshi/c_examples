#include<stdio.h>
#define word(w)\
char word_##w[]=#w

int main() {

word(one);
printf("%s",word_one);
    return 0;
}
