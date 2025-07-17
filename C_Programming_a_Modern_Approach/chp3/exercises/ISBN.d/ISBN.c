#include <stdio.h>

int main()
{
	int GSI, group_ID, pub_Code, item_ID, check;
	printf("insert ISBN:");
	scanf("%10d-%10d-%10d-%10d-%10d", &GSI, &group_ID, &pub_Code, &item_ID, &check);
	
	printf("GSI prefix:%d\n", GSI);
	printf("Group ID:%d\n", group_ID);
	printf("Publisher Code:%d\n", pub_Code);
	printf("Item ID:%d\n", item_ID);
	printf("check:%d\n", check);

	return 0;
}
