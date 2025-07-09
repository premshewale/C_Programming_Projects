#include<stdio.h>
void odd(int [][5]);
int main(){

    int a[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};

 odd(a);
    return 0;
}

void odd(int num[][5])
{
    int i,j,count=0;
    printf("odd Numbers are:\n");
    for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        if(num[i][j]%2!=0)
        {
            printf("%d ",(num[i][j]));
            count++;
        }
       
    }
    printf("\n"); 
}printf("Total odd Numbers are=%d",count);
}