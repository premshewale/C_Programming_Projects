#include<stdio.h>
int main(){

int basic, gross, net;

 printf("Enter Basic Salary="); net=
scanf("%d\n", basic);

gross=basic+net;

if (basic<=10000)
printf("HRA=20%, DA=80%, PF=10%, ESIC=20%");

else if (basic<=20000)
printf("HRA=20% DA=80%, PF=10%, ESIC=20%"); 

else if (basic>20000)
printf("HRA=20%, DA=80%, PF=10%, ESIC=20%");

return 0;
}