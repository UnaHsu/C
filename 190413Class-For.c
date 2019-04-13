#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 1; i < 10; i++)
    {
        for (j = 2; j < 10; j++)
        {
            printf("%d * %d = %2d | ", j, i, i * j);
        }
        puts("");
    }

    return 0;
}
