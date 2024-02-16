#include<stdio.h>
int fact(int);
int main()
{
    int n,temp,fac=0,j=0,sum=0;
    printf("\n enter number:");
    scanf("%d",&n);

    temp=n;
    while(temp>0)
    {
        j=temp%10;
        fac=fact(j);
        sum=sum+fac;
        temp/=10;
    }
    if(sum==n)
        printf("\n The number is Strong number");
    else
        printf("\n Not a strong number");
    return 0;

}

int fact(int a)
{
    int f=1;
    while(a>0)
    {
    f=a*f;
    a--;
    }
    return f;
}