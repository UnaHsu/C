#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int score = 0, sum = 0, items = 0;
    double avg;

    printf("Score:");
    scanf("%d", &score);
    while(score != -1)
    {   
        items += 1;
        sum += score;
        printf("Score:");
        scanf("%d", &score);
    }
    avg = (double) sum / items;
    printf("total: %d, Items: %d, Avg: %f", sum, items, avg);

    return 0;
}
