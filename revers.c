#include<stdio.h>
int main()
{
long n,rev=0,r;
printf("\nEnter a number: ");
scanf("%ld",&n);
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
printf("\n Reverse of given numbers is %ld",rev);
return 0;
}