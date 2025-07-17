#include <stdio.h>

int main()
{
	int n;
	printf("inserire due numeri:\n");
	scanf("%d",&n);

	printf("al contrario è:%d%d\n",n%10,n/10);

	return 0;
}
