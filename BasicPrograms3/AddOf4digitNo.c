#include<stdio.h>
int  main(){
int num,rem1,rem2,rem3,rem4,total;
printf("Enter a Four Digit Number=");
scanf("%4d",&num);            //num=4132
rem1=num%10;                     //rem1=2
num=(num/10);                      //num=413
rem2=num%10;                          //rem2=3
num=(num/10);                       //num=41
rem3=num%10;                             //rem3=1
num=(num/10);                      //num=4
rem4=num%10;                              //rem4=4
total=rem1+rem2+rem3+rem4;
printf("Total of all digit=%d\n",total);
return 0;


}