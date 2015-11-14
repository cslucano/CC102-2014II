#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, m;
    int game[51];
    int budget, daedalus, sum1, sum2;
    int earned = 0;
    int would = 0;

    scanf("%d", &n);
    scanf("%d", &m);

    int i = 0;
    while (i<m) {
        int j = 0;
        sum1 = 0;
        sum2 = 0;
        while (j<=n) {
            scanf("%d", game+j);
            //printf("%d ", *(game+j));

            if (j == 0) { budget = *(game+j); }
            if (j == 1) { daedalus = *(game+j); sum1 += *(game+j); }
            if (j > 1) { sum1 += *(game+j); sum2 += *(game+j); }
            
            j++;
        }

        if (sum1<=budget) { earned += daedalus; }

        if(sum2>=budget){
        } else {
            int lg = (int)(log10(budget-sum2));
            would += (int)pow(10, lg);
        }

        // printf("\n");
        i++;
    }    
    
    printf("%d\n", would-earned);
 
    return 0;
}
