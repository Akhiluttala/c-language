#include<stdio.h>
int main()
{
    int n1=0,n2=1,count,n,fib;
    printf("\nHow many fibonacci terms needed");
    scanf("%d",&n);
    if(n>=1)
        printf("\n0");
    if(n>=2)
        printf("\+1");
    if(n>=3)
        for(count=1;count<=n-2;count++)
        {
            fib=n1+n2;
            printf("\+%d",fib);
            n1=n2;
            n2=fib;

        } 
        return 0;      

}