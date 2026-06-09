#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int a[6];
    srand(time(NULL)); 
    for (int i = 0; i < 6; i++) {
        a[i] = (rand() % 45) + 1;
    }
    
    for (int i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}