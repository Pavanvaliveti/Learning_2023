#include<stdio.h>

int maxnum(int n)
{
    int a,b,c,d,tmp=n;
    a=n/10;
    b=((n/100)*10)+(n%10);
    c=((n/1000)*100)+(n%100);
    d=n%1000;
    int max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    if(d>max)
    {
        max=d;
    }
    return max;
}

int main()
{
    int n;
    scanf("%d",&n);
    int ans=maxnum(n);
    printf("%d",ans);
}