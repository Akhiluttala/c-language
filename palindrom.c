#include<stdio.h>
int main()
{
long n,m,rev=0,r;
printf("\nEnter a number: ");
scanf("%ld",&n);
m=n;
while(n>0)
{ 
    r=n%10;
rev=rev*10+r;
n=n/10;
}
if(m==rev)
printf("\nNUMBER IS PALINDROME");
else
printf("\nNOT A PALINDROME");
return 0;
}