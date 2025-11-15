#include <stdio.h>
      #include<math.h>
      int main()
     {
      float l,b,h,area,volume,a,sd;
      printf("enter height");
      scanf("%f",&h);
      printf("enter length");
      scanf("%f",&l);
      printf("enter breadth");
      scanf("%f",&b);
      area=2*(l*b+b*h+h*l);
      printf("area of the cuboid is %f\n",area);
      volume=l*b*h;
      printf("volume of the cuboid is %f\n",volume);
      a=l*l+b*b+h*h;
      sd=sqrt(a);
      printf("space diagonal of the cuboid is %f\n",sd);
      return 0;
      }
