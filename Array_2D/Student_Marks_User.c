#include<stdio.h>
int main(){
     int m[3][2];
int i,j;

printf("Enter Marks\n");

for( i = 0; i <3; i++){

 for ( j = 0; j <2; j++)
 {
scanf("%d", &m[i][j]);
}
}

for(i=0;i<3;i++){
for (j = 0; j<2;j++)
{
printf("%d",m[i][j]);
}
 printf("\n");
 }
return 0;
}