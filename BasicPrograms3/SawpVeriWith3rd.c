#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two a Veriable=");
    scanf("%d%d",&a,&b);    
    printf("Before Swaping--\nFirst varible=%d\nSecond variable=%d\n");
    c=a;
    a=b;
    b=c;
    printf("After Swaping--\nFirst variable=%d\nSecond variable=%d\n");
    return 0;

}