#include <stdio.h>

int main() {
    int ary[9];
    for(int i = 0; i < 9; i++) {
        ary[i] = i + 1;
        printf("%d ", ary[i]);
    }
    return 0;
}