#include <stdio.h>

int main()
{
    int dollars;
    float cents, amount;
    printf("insert dollars:\n");
    scanf("%d", &dollars);

    printf("insert cents:\n");
    scanf("%f", &cents);

    amount = ((dollars + cents)/100)*5;

    printf("ammount with tax: %.2f\n",amount+(dollars+cents));

    return 0;
}
