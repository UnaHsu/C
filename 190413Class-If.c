#include <stdio.h>
#include <stdlib.h>

int main(void)
{  
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
    
    return 0;
}
