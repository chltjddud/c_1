#include <stdio.h>
int i, j;

void program();

int main() {

    for (i = 0, j = 0; i <= 10; i++) {
        program();
    }
    return 0;
}

void program() {
    j = j + i;                          
    printf("The sum(0:%d)=%d\n", i, j); 
}