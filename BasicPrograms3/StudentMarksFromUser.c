#include<stdio.h>
int main()
{
    int roll_no,eng,maths,phy,chem,bio,total;
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
    total=eng+maths+phy+chem+bio;
    percent=total/5;
    printf("Roll No\tEnglish\tMathematic\tPhysics\tChemistry\tBiology\tTotal\tPercentage\t\n");
    printf("%d\t",roll_no);
    printf("%d\t",eng);
    printf("%d\t\t",maths);
    printf("%d\t",phy);
    printf("%d\t\t",chem);
    printf("%d\t",bio);
    printf("%d\t",total);    printf("%f\t",percent);
    return 0;


}