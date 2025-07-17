#include <stdio.h>

int main()
{
	int i, ii, iii, iv, v, vi, vii, viii,
		ix, x, xi, xii, xiii, xiv, xv, xvi;
	
	printf("Inserire numero da 1-16 per 16 volte:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &i, &ii, &iii, &iv, &v, &vi,
															 &vii, &viii, &ix,&x, &xi, &xii,															 &xiii, &xiv, &xv, &xvi);
	printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",i, ii, iii, iv, v, vi,vii,
																viii, ix, x, xi, xii, xiii,
																xiv, xv, xvi);
	printf("somma righe:%d ",i + ii + iii + iv);
	printf("%d ",v + vi + vii + viii);
	printf("%d ",ix + x + xi + xii);
	printf("%d\n ",xiii + xiv + xv + xvi);

	printf("\bsomma colonne:%d ",i + v + ix + xiii);
	printf("%d ",ii + vi + x + xiv);
	printf("%d ",iii + vii + xi + xv);
	printf("%d\n ",iv + viii + xii + xvi);

	printf("\bsomma diagonali:%d ",i + v + xi + xvi);
	printf("%d\n",iv + vii + xi + xii);

	return 0;
}
