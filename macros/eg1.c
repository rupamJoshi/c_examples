#include<stdio.h>
#define bool int
#define true 1
#define false 0

int main() {
    bool flag; // will be replaced with int flag
    flag = true;
    if(flag) {
        printf("%d", flag);
    }
    return false;
}