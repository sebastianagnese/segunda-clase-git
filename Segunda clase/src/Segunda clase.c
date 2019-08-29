#include <stdio.h>
#include <stdlib.h>

int calculaMaxMin(int *nMax,int *nMin);

int main(void)
{
	int nMax;
	int nMin;

	calculaMaxMin(&nMax,&nMin);

	printf("\nEl mayor numero es %d y el menor numero es %d",nMax,nMin);
	return 0;
}

int calculaMaxMin(int *nMax,int *nMin) {
	int numero;
	int flag;
	int i;
	flag = 0;
	i = 1;

	while (i < 8)
	{
		printf("\nIngrese un numero: ");
		scanf("%d",&numero);

		if (flag == 0 || numero > nMax)
		{
			*nMax = numero;
		}
		if (flag == 0 || numero < nMin)
		{
			*nMin = numero;
			flag = 1;
		}

		++i;
	}
	return 0;
}







