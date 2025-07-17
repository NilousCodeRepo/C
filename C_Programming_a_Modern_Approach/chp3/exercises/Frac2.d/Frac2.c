#include <stdio.h>

int main()
{
	int n1,d1,n2,d2;
	printf("inserire la frazione(a/b+c/d):\n");
	scanf("%d/%d+%d/%d",&n1,&d1,&n2,&d2);
	
	printf("%d/%d\n",((d1*d2)/d1)*n1 + ((d1*d2)/d2)*n2 , d1*d2);
	return 0;
}
