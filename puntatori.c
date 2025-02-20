#include <stdio.h>
#include <stdlib.h>
int main(){
	int x;
	int * px, * py;
	int **ppx;
	x = 5;
	px = &x;
	ppx = &px;
	int v[10];
	py = (int *)malloc(sizeof(int)*10);
	for (int i=0; i<10; i++)
		py[i] = *px + i;

	printf("%d %d %d\n",x,*px,**ppx);

	printf("Indirizzo di x: %p Contenuto di px: %p\n",&x, px);
	printf("Indirizzo di px: %p Contenuto di ppx: %p\n",&px, ppx);
	for (int i=0; i<10; i++)
		printf("%2d ",*(py+i));
	printf("\n");

	for (int i=0; i<10; i++)
		*(py+i) = i;

	for (int i=0; i<10; i++)
		printf("%2d ",py[i]);
	printf("\n");

	return 0;
}
