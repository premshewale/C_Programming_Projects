#include<stdio.h>

int main(){

int a=0; 

while (a<=10)
{
a++; 
if (a==5) 
    continue;

printf("print no = %d\n",a);

} //printf("%d", a); 

return 0;
}