#include<stdio.h>
int main()
{
    int bsalary,hra,da,pf,gsalary,nsalary;
    printf("Enter a Basic Salary=");
    scanf("%d",&bsalary);
     
    hra=0.1*bsalary;
    da=0.1*bsalary;
    pf=0.08*bsalary;
    gsalary=bsalary+hra+da;
    nsalary=gsalary-pf;
    printf("Gross Salary=%d\n",gsalary);
    printf("Net Salary=%d",nsalary);
    return 0;
     
}