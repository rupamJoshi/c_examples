#include<stdio.h>
#define greate_of(e,f)\
({\
    int z;\
    if(e>f) {\
        z=e;\
    }\
    else {\
        z=f;\
    }\
    z;\
})\

int main() {
    printf(" Greater number is %d ", greate_of(200,100));
    printf(" Greater number is %d ", greate_of(200,1));
    return 0;
}