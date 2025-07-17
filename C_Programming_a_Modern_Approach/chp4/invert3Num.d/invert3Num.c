#include <stdio.h>

int main()
{
	int n;
	printf("inserire tre numeri:\n");
	scanf("%d",&n);

	printf("al contrario è:%d%d%d\n",n%10,(n%100)/10,n/100);

	return 0;
}
