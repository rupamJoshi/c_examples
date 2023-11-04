#include<stdio.h>
#include<string.h>
typedef char __name[26];
int main() {
    __name names[20];
    __name s;
    strcpy(names[0],"rupam");
    strcpy(names[1],"joshi");
    
    for(int i=0;i<2;i++) {
        printf("%s ", names[i]);
    }

    return 0;
}