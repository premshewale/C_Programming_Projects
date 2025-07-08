#include<stdio.h> 
#include<conio.h>
int main(){
int a[5] = {44,55,66,77,88};
int high,i;
printf("Enter Number For Search="); 
scanf("%d",&high);

for (i=0;i<5;i++)
{
if (a[i]==high)
{
printf(" Number is present\n ");
}

else{
printf(" Number is not present\n");}
break;

}
_getch();
return 0;

}