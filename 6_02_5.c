#include <stdio.h>

int main() {
    int ary[3][3];
    int val = 1;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            ary[i][j] = val++;
            printf("%d", ary[i][j]);
        }

        printf("\n");
    }
    return 0;
}