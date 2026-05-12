#include <stdio.h>

int main() {
    int dan;
    for(; ;){
        scanf("%d", &dan);
        if(dan >=2 && dan<=9){
            break;
        }
    }
    for (int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", dan, i, dan * i);
    }


return 0;
}