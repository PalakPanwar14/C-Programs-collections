#include <stdio.h>
 int main()
    {
        int a,b,c;
        printf("enter basic salary:");
        scanf("%d",&a);
        printf("enter dearness allowance:");
        scanf("%d",&b);
        printf("enter house rent allowance:");
        scanf("%d",&c);
        printf("your gross salary is %d",a+b+c);
        return 0;
    }
