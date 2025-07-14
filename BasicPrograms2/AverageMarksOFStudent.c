#include<stdio.h>
int main()
{
    int roll_no,eng,maths,phy,chem,bio,avg;
    float percent;
    printf("Enter Roll No=");
    scanf("%d",&roll_no);
    printf("English=");
    scanf("%d",&eng);
    printf("Mathematics=");
    scanf("%d",&maths);
    printf("Physics=");
    scanf("%d",&phy);
    printf("Chemistry=");
    scanf("%d",&chem);
    printf("Biology=");
    scanf("%d",&bio);
    avg=(eng+maths+phy+chem+bio)/5;
    printf("Average Marks Of student=%d",avg);
   
    return 0;


}