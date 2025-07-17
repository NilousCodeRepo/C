#include <stdio.h>

int main()
{
	printf("inserire un data nel formato mm/dd/yyyy\n");
	
	int m,d,y;

	scanf("%2d%2d%4d",&m,&d,&y);
	
	while(m > 12 | d > 31 | y < 0)
		{
			printf("date inserite non corrette, reinserirle:");
			scanf("%2d%2d%4d",&m,&d,&y);	
		}
	
	printf("date inserite ma nell'ordine yyyy/mm/dd:%d/%d/%d\n", y, m, d);
		
	return 0;
}
