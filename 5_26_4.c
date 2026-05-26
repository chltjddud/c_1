#include <stdio.h>

int max(int num1, int num2);

int main(void)
{
    int a, b;
    int result;

    printf("두 수 입력 : ");
    scanf("%d %d", &a, &b);


    printf("큰 수 : %d\n", max(a, b));

    return 0;
}

int max(int x, int y)
{
    if (x >= y) {
        return x; 
    } else {
        return y; 
    }
}