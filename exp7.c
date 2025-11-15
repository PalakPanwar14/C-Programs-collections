             #include <stdio.h>
             #include<math.h>
                int main()
               {
                float p,r,t,s;
                printf("enter Principal: \n");
                scanf("%f",&p);
                printf("enter rate: \n");
                scanf("%f",&r);
                printf("enter time: \n");
                scanf("%f",&t);
                s= (p*r*t)/100;
                printf("simple interest is %f\n",s);
                return 0; 
                }
