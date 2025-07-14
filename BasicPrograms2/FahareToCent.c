#include<stdio.h>
int main()
{
    float cent,fahra;
    printf("Enter Temp in Far=");
    scanf("%f",&fahra);
    cent=(fahra-32)*5/9;
    printf("Centigrade=%.3f",cent);
    return 0;


}