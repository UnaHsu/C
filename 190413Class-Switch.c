#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int math;    
    printf("Please input Math score :");
    scanf("%d", &math);
    int level = math / 10;
    switch(level)
    {
        case 10:
        case 9:        
            printf("%d is in A Level", math);
            break;
        case 8:
        case 7:
            printf("%d is in B Level", math);
            break;
        case 6:
            printf("%d is in C Level", math);
            break;
        default : 
            printf("%d is in D Level", math);
            break;
    }

    return 0;
}
