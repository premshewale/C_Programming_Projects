#include<stdio.h>
int main()
{
int bs,gs,ns;
float hra=10.5f,da=75.2f,pf=5.5f;
printf("Enter Basic Salary=");
scanf("%d",&bs);
gs=bs+hra+da;
ns=gs-pf;

if (bs<=10000)
{
printf("HRA=20%,DA=80%,PF=10%,ESIC=20%\n");
}
else if (bs >20000)
{
printf("HRA = 30%,DA=85%,PF= 10% ,Medical A= 10%, ESIC =20% \n");
}
else if (bs<= 20000)
 {printf ("HRA = 25%, DA = 90%, Pf= 10% ,Medical A = 10%, Esic= 20% \n");
 }
If (gs >60000)
{
Printf ("He needs to pay tax of 12%");
float tax= 0.0f;
tax=0.12*gs;
ns= gs-tax;
printf("\n Gross Salary :%d\n Net Salary :%d",gs,ns);
}
return 0;
}