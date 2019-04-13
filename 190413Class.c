#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*
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

    //==============================
    int b = 1, c = 1;
    int bplus, cplus;
    bplus = ++b; //加1後再回傳給bplus
    cplus = c++; //回傳給cplus後再加1
    printf("b %d bplus %d\n", b, bplus);
    printf("c %d cplus %d\n", c, cplus);
    //==============================
    int score;
    printf("Please input a number\n");
    scanf("%d", &score);
    if (score < 60) {
        printf("Bad");
    }
    else if (score < 80) {
        printf("Good");
    }
    else {
        printf("Perfect");
    }
    //==============================    
    int price, money, items;
    printf("Please input a price:");
    scanf("%d", &price);
    printf("Please input a money:");
    scanf("%d", &money);

    printf("You have $ %d and the goods are $ %d pre each.\n", money, price);

    if (money >= price)
    {
        items = money / price;
        printf("You have enough money, you can got %d items\n", items);
    }
    else
    {
        printf("You do not have enough money, need more then $ %d", price - money);
    }
    //==============================
    int number = 0;
    printf("Please input a number:");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("%d is a even number", number);
    }
    else
    {
        printf("%d is a odd number", number);
    }
    */
   //==============================   
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
