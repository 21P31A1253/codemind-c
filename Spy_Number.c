#include<stdio.h>
int main()
{
    int n,r,sum=0,product=1,diff;
    scanf("%d",&n);
    while(n>=1)
    {
        r=n%10;
        sum=sum+r;
        product=product*r;
        n=n/10;
    }
    diff=product-sum;
    if(diff==n)
    {
        printf("Spy Number");
    }
    else
{
    printf("Not Spy Number");
}
return 0;
    
}