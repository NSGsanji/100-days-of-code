//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
float main()
{
    float cp,sp,pa,pp;
    printf("Enter cost price and selling price: ");
    scanf("%f %f",&cp,&sp);
    pa=sp-cp;
    pp=(pa/cp)*100;
    printf("profit percentage=%f",pp);
    return 0;
}
