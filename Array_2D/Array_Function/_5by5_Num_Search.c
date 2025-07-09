#include<stdio.h>
void search(int[][5]);
int main(){

int m[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
search(m);
return 0 ;
}

void search(int arr[][5])
{
int i,j,num,count=0, flag=0;

printf("Enter Number For Search-");
scanf("%d", &num);

for(i=0;i<5;i++){ 
        for(j=0;j<5;j++) {
            if(arr[i][j]==num){
flag=1;
count++;
            }
        }
}

if(flag==1)
 printf(" Number is present:%d times\n",count);

else
printf(" Number is Not present");
}