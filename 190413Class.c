#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    //==============================
    printf("hello\n");
    int a = 5;
    a = a + 2;
    printf("%d\n", a);

    //==============================
    int price = 1000;
    float dis = 0.88;
    int ttl = price * dis;
    printf("After discount ttl is $ %d\n", ttl);

    printf("Please input the price.\n");
    scanf("%d", &price);
    ttl = price * dis;
    price *= dis;
    printf("After discount ttl is $ %d\n", ttl);
    printf("After discount price is $ %d\n", price);
    
    return 0;
}
