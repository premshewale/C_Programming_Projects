#include<stdio.h> 
int main(){
int num,a[5]={2,4,6,3,8};

int *p1=&a[0]; 
int *p5=&a[4];

printf("%d\n",*p1);

printf("%d\n",*p5); 
printf("%d\n",*(p5-2));

return 0;
}