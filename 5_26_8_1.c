#include <stdio.h>
#include <ctype.h>

void up_down_case(void) {
    int c;
    
    while((c = getchar()) != EOF) {
        if(islower(c))
        {
            c = toupper(c);
        }
        else if(isupper(c))
        {
            c = tolower(c);
        }
        printf("%c\n", c);
    }
}