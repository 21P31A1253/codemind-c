#include<stdio.h>
int main()
{
    int i,n,sqr,sum=0;
    scanf("%d",&n);
    sqr=n*n;
    for(i=sqr;i>0;i/=10)
    {
        sum+=(i%10);
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
{
    printf("Not Neon Number");
}
return 0;
}