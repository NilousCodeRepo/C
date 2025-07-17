#include <stdio.h>

int main()
{
	int prod;
	float price;

	printf("inserire CODICE del prodotto:\n");
	scanf("%d", &prod);
	
	printf("inserire PREZZO del prodotto:\n");
	scanf("%f", &price);

	if(price > 9999.99)
	{
		printf("ERROR: not enough bits to display numbers so large.");	
	}

	printf("inserire un DATA nel formato mm/dd/yyyy\n");
	
	int m,d,y;

	scanf("%2d%2d%4d",&m,&d,&y);
	
	while(m > 12 | d > 31 | y < 0)
		{
			printf("date inserite non corrette, reinserirle:");
			scanf("%2d%2d%4d",&m,&d,&y);	
		}
	
	printf("CODICE:\tPREZZO:\tComprati il:\n%d \t%.2f \t/%d/%d%d\n", prod, price, m, d, y);

		
	return 0;
}
