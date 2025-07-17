#include <stdio.h>

int main()
{
    int euro;

    printf("Inserire euro:\n");
    scanf("%d", &euro);

    int v = euro/20;
    int d = (euro - (20 * v)) / 10;
    int c = (euro - (20*v)-(10*d)) / 5;
    int u = (euro - (20*v)-(10*d)-(5*c)) / 1;

    printf("banconote da 20:%d\n banconote da 10:%d\n bandonote da 5:%d\n banconote da 1:%d\n",v,d,c,u);
 
    return 0;
}

