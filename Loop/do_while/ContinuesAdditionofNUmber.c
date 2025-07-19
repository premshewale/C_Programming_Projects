#include<stdio.h>
int main()
{
    int num1,ans=0;
    printf("prog For Continues Addition Of NUmbers=\n");
    do{
        printf("Enter Nunmber=");
        scanf("%d",&num1);
        ans=ans+num1;
        printf("Additon of all Numbers=%d\n",ans);
    
    }
while (ans!=0);
return 0;
}