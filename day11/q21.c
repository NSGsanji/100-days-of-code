//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include<stdio.h>
int main()
{
  int n;
  printf("enter month no");
  scanf("%d",&n);
  if (n==1)
  {
    printf("month:january" "    " "no of days:31");
  }
  else if(n==2)
  {
    printf("month:february" "    " "no of days:28");
  }
  else if(n==3)
  {
    printf("month:march" "    " "no of days:31");
  }
  else if (n==4)
  {
    printf("month:april" "    " "no of days:30");
  }
  else if (n==5)
  {
    printf("month:may"  "    ""no of days:31");
  }
  else if(n==6)
  {
    printf("month:june" "    " "no of days:30");
  }
  else if(n==7)
  {
    printf("month:july" "    " "no of days:31");
  }
  else if (n==8)
  {
    printf("month:august" "    " "no of days:31");
  }
  else if (n==9)
  {
    printf("month:september" "    " "no of days:30");
  }
  else if (n==10)
  {
    printf("month:october" "    " "no of days:31");
  }
  else if(n==11)
  {
    printf("month:november" "    " "no of days:30");
  }
  else if(n==12)
  {
    printf("month:december" "    " "no of days:31");
  }
  else
  {
    ("invalid month number please retry!!!");
  }
  return 0;
}
