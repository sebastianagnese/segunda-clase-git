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
	int max;
	int min;
	flag = 0;
	i = 0;

	while (i < 8)
	{
		printf("\nIngrese un numero: ");
		scanf("%d",&numero);

		if (flag == 0 || numero < min)
		{
			min = numero;
		}
		if (flag == 0 || numero > max)
		{
			max = numero;
		}

		flag++;
		i++;

		*nMax = max;
		*nMin = min;
	}
	return 0;
}







