#include <stdio.h>

#define N 3 

int main(void)
{
    int a[N]; 
    int b[N][N];

    printf("sizeof(a[N-1])     : %d\n", (int)sizeof(a[N-1]));

    printf("sizeof(a)          : %d\n", (int)sizeof(a));

    printf("sizeof(b[N-1][N-1]) : %d\n", (int)sizeof(b[N-1][N-1]));

    printf("sizeof(b[N-1])     : %d\n", (int)sizeof(b[N-1]));

    printf("sizeof(b)          : %d\n", (int)sizeof(b));

    return 0;
}
