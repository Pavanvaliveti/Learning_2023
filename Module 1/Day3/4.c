// Write a program to find both smallest and largest digits in given n numbers
// For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5

#include<stdio.h>

void check(int num)
{
    int max,min,aa=num%10;
    max=aa;min=aa;
    while(num)
    {
        int a=num%10;
        if(a<min)
        {min=a;}
        if(a>max)
        {max=a;}
        num=num/10;
    }
    printf("%d and %d",min,max);

}

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a;
        scanf("%d",&a);
        if(a<0)
        {
            a=a*(-1);
        }
        if(a<=9)
        {
            printf("Not Valid");
        }
        else
        {
            check(a);
        }
    }
}