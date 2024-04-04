#include<stdio.h>
int main()
{
int i,n;
printf("\n\nEnter a no: ");
scanf("%d",&n);
for(i=2;i<n;i++)
if(n%i==0)
{ printf("\n%d is NOT PRIME \t Factor is %d",n,i);
exit(0);
}
printf("\n%d is PRIME",n);
return 0;
}