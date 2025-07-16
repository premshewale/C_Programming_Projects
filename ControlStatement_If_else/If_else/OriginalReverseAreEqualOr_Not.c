#include<stdio.h>
int main(){
int num, rem1, rem2, rem3, rem4, rev, original;
printf("Enter a four digit number=");
scanf("%4d", &num); //num-4132

original=num; 
rem1=num%10;    //rem1=2
num=(num/10);   //num=413
rem2=num%10;    //rem2=3
num=num/10;     //num=41
rem3=num%10;    //rem3=1
num=num/10;     //num=4
rem4=num%10;    //rem4=4

rev=(rem1 *1000)+(rem2 *100)+(rem3*10)+rem4; //2314

printf("Reverse of Given Number =%d\n",rev); 
if (original==rev)
{ printf("Original And Reverse are Equal\n",rev);
}
else{
    ("Are Not Equal\n",rev);
}
return 0;
}