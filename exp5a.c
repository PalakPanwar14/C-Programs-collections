#include <stdio.h>
int main()
{
float a,b,c,d,area;
printf("enter height");
scanf("%f",&a);
printf("enter first parallel side");
scanf("%f",&b);
printf("enter second parallel side");
scanf("%f",&c);
d=b+c;
area=0.5*d*a;
printf("area of the trapezium is %f\n",area);
return 0;
}

