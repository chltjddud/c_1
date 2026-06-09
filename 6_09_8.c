#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int sets; 
    
    srand(time(NULL));
    
    printf("Enter lotto set number : ");
    scanf("%d", &sets);
    
    int a[sets][6];
    
    for (int i = 0; i < sets; i++) {
        for (int j = 0; j < 6; j++) {
            
            while (1) {
                int temp = (rand() % 45) + 1;
                int check = 0;
                
                for (int k = 0; k < j; k++) {
                    if (a[i][k] == temp) {
                        check = 1;
                        break;
                    }
                }
                
                if (check == 0) {
                    a[i][j] = temp;
                    break; 
                }
            }
            
        }
    }
    
    for (int i = 0; i < sets; i++) {
        printf("set %d :", i + 1);
        for (int j = 0; j < 6; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
