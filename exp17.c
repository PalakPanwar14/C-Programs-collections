
#include <stdio.h>
int main() {
    int i, j;
    char ch;
    for (i = 5; i >= 1; i--) {
        ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%d%c", j, ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
