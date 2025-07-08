#include<stdio.h>
#include<conio.h>
int main(){

int a[5]={44,55,66,77,88};
int high, i;
high= a[0];

/*printf("Enter 5 Numbers=");

for (i=0;i<5;i++)

scanf("%d",&a[i]);

}*/

for(i=1;i<5;i++)
{
if(a[i]>high)
{
high=a[i];
}
}
printf("Highest Number: %d\n",high);
//fflush(stdin);
_getch();
return 0;
}