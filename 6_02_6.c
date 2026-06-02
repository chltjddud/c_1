#include <stdio.h>

int main() {
    int ary[3][3];
    int val = 1;
    int sum = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            ary[i][j] = val++;
            printf("%d ", ary[i][j]);
            sum += ary[i][j];
        }
        printf("%d\n",sum);
        sum = 0;
    }
    return 0;
}