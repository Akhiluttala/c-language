#include<stdio.h>
#include<math.h>
int main()
{
int n, r, arm,sum=0,power=0;
printf("\n\tPROGRAM TO CHECK A NUMBER ARMSTRONG OR NOT");
printf("\n\tEnter No. ");
scanf("%d",&n);
arm=n;
while(n!=0)
{
power++;
n/=10;
}
printf("\nNo. of Digits=%d",power);
n=arm; /*with the above while loop n becomes zero, so again assign arm to n*/
while(n!=0)
{
r=n%10;
sum+=pow(r,power);
n=n/10;
}
if(sum==arm)
printf("\n\n\t%d IS AN ARMSTRONG NO.",arm);
else
printf("\n\n\t%d IS NOT AN ARMSTRONG NO.", arm);
return 0;
}