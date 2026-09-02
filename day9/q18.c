#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks of the student");
    scanf("%d",&marks);
    if (marks>=90&& marks<100)
    {
        printf ("A grade");
    }
        else if (marks>=80 && marks<90)
        {
            printf ("B grade");
        }
        else if (marks>=70 && marks<80)
        {
            printf ("C grade");
        }
        else if (marks>=60 && marks<70)
        {
            printf ("D grade");
        }
        else if ( marks<60)
        {
            printf ("E grade");
        }
    else
    {
        printf ("invalid marks");
    }
}
