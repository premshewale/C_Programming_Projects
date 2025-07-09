#include<stdio.h> 
#include<string.h>
void displaydiagonal(int[][5]);
 int main(){

int m[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};

displaydiagonal(m); 
return 0;
}

void displaydiagonal (int arr[][5])
{
int i,j;

for(i=0;i<5; i++) {
    for(j=0;j<5;j++) {
         if(i==j)

printf("%d\n",(arr[i][j]));
    }
}
}