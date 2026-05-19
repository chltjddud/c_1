#include <stdio.h>


void program(void);

int main() {
    program();

    return 0;
}


void program(void) {
    int num1, num2;
    int sum;

    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;

    printf("%d + %d = %d\n", num1, num2, sum);
}