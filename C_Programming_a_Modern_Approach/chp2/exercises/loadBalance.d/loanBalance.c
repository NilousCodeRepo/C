#include <stdio.h>

int main()
{
    float loan, rate, payment;

    printf("Insert loan\n");
    scanf("%f", &loan);
    
    printf("Insert rate\n");
    scanf("%f", &rate);
    
    printf("Insert payment\n");
    scanf("%f", &payment);
    
    rate =(rate/100)*12;

    for(int i = 0; i < 3; i++)
    {
        loan = loan - (payment * rate);
 
        printf("payment %d° month:%.2f\n",i+1, loan);
    }

    return 0;
}
