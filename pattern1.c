#include<stdio.h>
int main()
{
int i,j,k,n=1;
printf("\n\n\n\t PROGRAM TO PRINT NUMBERS IN TRIANGLE FORMAT\n");
for( i=1 ; i<6 ; i++)
{
for( k=6-i ; k>0 ; k--)
{
printf(" ");
}
for( j=1 ; j<=i ; j++)
{
printf(" *");
n++;
}
printf("\n");
}
return 0;
}