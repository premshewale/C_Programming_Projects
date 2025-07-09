#include<stdio.h>
int main(){

int m[3][5]={(1,2,3,4,5),
             (1,2,3,4,5),
             (1,2,3,4,5)};

int i,j;

for(i = 0; i < 3 ;i++){ 
for( j = 0; j < 5 ;j++)
{
printf("%d ",m[i][j]);
}
printf("\n");
}
return 0;
}