#include <stdio.h>
#include <stdlib.h>

int main()
{
    int type;
    int guess;
    int guessed = 0;

    scanf("%d", &type);

    int i = 0;
    while(i<5) {
        scanf("%d", &guess);
        if(type == guess) { guessed++; }  
        i++;
    }
    printf("%d\n", guessed);

    return 0;
}
