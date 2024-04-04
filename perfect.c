#include<stdio.h>
int main()
{
long int n,i=1,perfect=0;
printf("\nEnter a number: ");
scanf("%ld",&n);
while(i<n)
{
if(n%i==0)
perfect+=i;
i++;
}
if(perfect==n)
printf("\n%ld is perfect",n);
else
printf("\n%ld is not perfect",n);
return 0;
}