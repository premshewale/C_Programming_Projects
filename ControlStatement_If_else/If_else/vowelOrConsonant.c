#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter a Alphabate=");
    scanf("%c",&alpha);
    if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'||alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U')
    {
        printf("Letter is A Vowel");

    }
    else{
        printf("Letter is a Consonant");
    }
    return 0;
}