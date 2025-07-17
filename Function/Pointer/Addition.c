#include<stdio.h>
int main(){
int a=10,b=20,add; 
int *ptra=&a,*ptrb=&b;

add=*ptra+*ptrb; 
printf("Addition of painter-=%d\n", add);

return 0;
}