#include<stdio.h>
#include<stdlib.h>

int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            return gcd(a-b,b);
        }
        else
        {
            return gcd(a,b-a);
        }
    }
    return a;
}

int main()
{
    int a,b;
    printf("Enter the numbers : ");
    scanf("%d%d",&a,&b);
    printf("%d",gcd(a,b));
}