#include<stdio.h> 
int main() {

int num1[5];
int num2[5];
int ans[5];
int i;

printf("1st Numbers are=\n");
for(i=0;i<=4;i++)
scanf("%d", &num1[i]);

printf("2st Numbers ares=\n");
for(i=0;i<=4;i++)
scanf("%d",&num2[i]);

printf("Addition is as=\n");
for(i=0;i<=4;i++){
     ans[i]=(num1[i]+num2[i]);

printf("Addition of mumbers%d+%d=%d\n",num1[i],num2[i],ans[i]);
}


return 0;
}