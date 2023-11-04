#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void genericSort(void *arr,int size ,int ele_size,int (*ptrToFunc)(void *,void *)){
int m,e,f;
void  *g;
g=malloc(ele_size);
m=size-1;
while(m>0){
e=0;
f=1;
while(e<m)
{

if(ptrToFunc((arr+ (e *ele_size )),arr+ (f *ele_size ))){
    printf("came here \n");
    memcpy(g,arr+ (e *ele_size ),ele_size);
    memcpy(arr+ (e *ele_size ),arr+ (f *ele_size ),ele_size);
    memcpy(arr+ (f *ele_size ),g,ele_size);
}
e++;
f++;

}
    m--;
}

free(g);
}

int compInt(void *a, void *b) {
    int * x = a;
    int *y=b;
 printf(" **%d** %d \n", *x, *y);   
 if(*x > *y) {
    return 1;
 }
 return 0;
}

int main(){

int arr[] = {2,35,56, 6, 7,8,12,89,9,1};
int size = 10;

genericSort(arr, size, sizeof(arr[0]),compInt);
for(int i=0;i<size;i++) {
    printf("%d \n", arr[i]);
}
return 0;

}