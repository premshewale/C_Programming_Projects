#include<stdio.h>
int main()
{
int num; printf("enter number="); 
scanf("%d", &num);
if (num%2==0){ 
    printf("Number is Even\n");
}
else{
printf("Number is odd\n");
}
return 0;
}