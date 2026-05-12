#include <stdio.h>

int main() {
    int i = 1; 
    int n; 
    int sum = 0; 

    scanf("%d", &n);


    do {
        if (i % 2 == 1) {
            sum += i;
        }
        i++;
    } while (i <= n);

    printf("%d", sum);

    return 0;
}
