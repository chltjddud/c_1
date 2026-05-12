#include <stdio.h>

int main() {
    int dan;
    while(1){
        scanf("%d", &dan);
        if(dan >=2 && dan<=9){
            break;
        }
    }
    int i = 1;
    while (i <= 9) { 
        printf("%d x %d = %d\n", dan, i, dan * i);
        i++;
    }


return 0;
}