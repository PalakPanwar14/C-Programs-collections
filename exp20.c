#include <stdio.h>
int main() {
    char *subjects[] = {"C Language", "Data Structures", "DBMS", "Operating Systems"};
    int i;
    printf("Subjects List:\n");
    for (i = 0; i < 4; i++) {
        printf("%s\n", subjects[i]);
    }
    return 0;
}

