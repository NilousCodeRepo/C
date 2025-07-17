#include <stdio.h>

#define PI 3.14

int main()
{
	float r;

	printf("inserire raggio della sfera\n");
	scanf("%f", &r);	
	
	float formula = 4.0f/3.0f*(PI*100*r*r*r);//r cubed is 100*RADIUS
	
	printf("volume: %f\n",formula);

	return 0;
}
