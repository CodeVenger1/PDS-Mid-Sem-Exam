#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float r1,r2;
    printf("\n Enter the coefficients:");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d<0)
        printf("\n Imaginary roots");
    else{
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("\n The roots of the quadretic equations are: %f and %f",r1,r2);
    }
    return 0;
}