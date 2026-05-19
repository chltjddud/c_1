#include <stdio.h>

int num1, num2;


void input(void);

int main() {
    int sum;
    input();
    sum = num1 + num2;

    printf("%d + %d = %d\n", num1, num2, sum);

    return 0;
}

void input(void) {
    scanf("%d %d", &num1, &num2);
}