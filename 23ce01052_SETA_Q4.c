#include<stdio.h>
#include<math.h>

int main()
{
    int n,i=1,k,rep1=0,rep2=0,count=0,j;
    printf("\n Enter a number:");
    scanf("%d",&n);
    printf("\n The pair of the prime numbers are:");
    while(i<=n/2)
    {   
        j=n-i;
        for(k=2;k<=sqrt(i);k++)
        {
            if(i%k==0)
            {
            rep1++;
            }
        }
        for(k=2;k<=sqrt(j);k++)
        {
            if(j%k==0)
            {
            rep2++;
            }
        }
        
        if(rep1==0&&rep2==0)
        {
        printf("\n %d %d",i,j);
        count++;
        }
        rep1=0;
        rep2=0;
        i++;
    }
    if(count==0)
    printf("\n No such pairs");
    return 0;
}
