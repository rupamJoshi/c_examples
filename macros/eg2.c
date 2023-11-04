#include<stdio.h>
#define PRINT_GREATER(e,f)\
if (e>f)\
{\
    printf("%d Greater number \n", e);\
}\
else {\
    printf("%d Greater number \n", f);\
}

int main() {
    PRINT_GREATER(100,200)
    PRINT_GREATER(2,45)
    return 0;
}