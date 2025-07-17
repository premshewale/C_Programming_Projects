#include<stdio.h>
int main(){
int a = 10,b = 20 , temp;
int *ptra=&a, *ptrb=&b;

printf("before swapping=%d\t%d\n",a,b);

temp=*ptra;
*ptra=*ptrb;
*ptrb=temp;
printf("after swapping=%d\t%d\n",a,b);

return 0;
}