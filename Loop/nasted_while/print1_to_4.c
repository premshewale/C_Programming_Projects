#include<stdio.h>
int main()
{ 
    
    int num,i,j;
i = 1 ;

while(i <= 4) {     //rows
    
     while(j <= 4)      // columns
{
printf("%d",j);
j++;
}
 printf("\n"); 
 i++;
}
return 0;
}