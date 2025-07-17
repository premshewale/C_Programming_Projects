#include<stdio.h>
int main(){
int a=10;
int *ptra=&a;
printf("a=%d\n", a);
printf("a=%u\n",&a);
printf("a=%d\n", *ptra); 
printf("a=%u\n", *ptra);
return 0;

}