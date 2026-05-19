#include <stdio.h>

void program();

int main() {
    program();

    return 0;
}

void program() {
    int i, j; 
    int s = 0;

    scanf("%d %d", &j, &i);

    for (int k = j; k <= i; k++) {
        s = s + k;
        printf("The sum(%d:%d)=%d\n", j, k, s);
    }
}