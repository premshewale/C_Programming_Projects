#include<stdio.h>
int main()
{
    int roll_no=1,eng=80,maths=80,phy=80,chem=80,bio=80,total;
    float percent;
    total=eng+maths+phy+chem+bio;
    percent=total/5;
    printf("Roll No\tEnglish\tMathematic\tPhysics\tChemistry\tBiology\tTotal\tPercentage\t\n");
    printf("%d\t",roll_no);
    printf("%d\t",eng);
    printf("%d\t\t",maths);
    printf("%d\t",phy);
    printf("%d\t\t",chem);
    printf("%d\t",bio);
    printf("%d\t",total);
    printf("%f\t\n",percent);
    return 0;

  
}