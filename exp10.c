          #include <stdio.h>
               int main()
              { 
float a,b,c,d,e,per;
printf("please enter your marks in all 5 subjects:\n");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
per=(a+b+c+d+e)/5;
printf("your percentage is %f\n",per);
if(per>90)
{
printf("1st division");
}
else if(per>80)
{
printf("2nd division");
}
else if(per>70)
{
printf("3rd division");
}
else if(per>60)
{
printf("4th division");
}
              return 0;
             }
