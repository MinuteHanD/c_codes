#include<stdio.h>
void main()
{
    int a,b,i,j;
// if there are n rows then there are 2n-1 columns
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=2*5-1;j++)
        {
            if(j>=5-i+1 && j<= 5+i-1)   //stars will be printed every line in range (n-i+1 to n+i-1) imp
            {                           //draw a matrix to understand better
                printf("*");
            }
            else
            {
                printf(" ");
            }       
        }
        printf("\n");
    }
}