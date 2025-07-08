#include<stdio.h>
void search(int, int[]); 
int main(){
int num, a[5]={2,4,6,4,2}; 
printf("Enter a Number to Search in Array=");

scanf("%d", &num);

search(num,a); 
return 0;
}

void search(int n,int a[]){ 
    int i, flag=0, count=0;
for(i=0;i<5;i++){
if(a[i]==n){
 flag=1;
count++;
}
} if(flag==1)

printf("number is Present in Array %d times\n",count);
else{
printf("Number is Not Present in Array\n");
}

}