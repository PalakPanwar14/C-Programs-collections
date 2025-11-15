#include <stdio.h>
void callByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside Call by Value: x = %d, y = %d\n", x, y);
}
void callByReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("Inside Call by Reference: x = %d, y = %d\n", *x, *y);
}
int main() {
    int a = 10, b = 20;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    callByValue(a, b);
    printf("After Call by Value: a = %d, b = %d\n", a, b);
    callByReference(&a, &b);
    printf("After Call by Reference: a = %d, b = %d\n", a, b);
    return 0;
}
