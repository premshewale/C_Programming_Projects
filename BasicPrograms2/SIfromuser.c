#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("Principal Amount=");
    scanf("%f",&p);
    printf("Rate Of Intrest=");
    scanf("%f",&r);
    printf("Time in Year=");
    scanf("%f",&t);
    si=(p*r*t)*0.01;
    printf("SI=%f\n",si);
    return 0;
}