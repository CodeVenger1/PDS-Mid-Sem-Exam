 #include<stdio.h>
 int main()
 {
    float r,v=0,s=0;
    printf("\n Enter radius:");
    scanf("%f",&r);
    v=(4*3.14*r*r*r)/3;
    s=(4*3.14*r*r);
    printf("\n The volume of the sphere is %.2f and the surface area is %.2f",v,s);
    return 0;
 }