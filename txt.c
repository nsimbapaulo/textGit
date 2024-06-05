#include<stdio.h>
#include<stdlib.h>

int *list(int *lista, int tamanho_1)
{
	int *lista_2 = (int *)malloc(tamanho_1*sizeof(int));
	int tamanho_2 = 0;

	for (int i = 0; i < tamanho_1; ++i)
	{
		int elemento = lista[i];
		int repetir = 0;

		for (int j = 0; j < tamanho_2; ++j)
		{
			if(lista_2[j] == elemento)
			{
				repetir = 1;
				break;
			}
		}

		if(!repetir)
		{
			lista_2[tamanho_2] = elemento;
			tamanho_2++; 
		}
	}

	return(lista_2);
}

void main()
{
	int l[] = {3, 3, 1, 7, 5, 8 ,3, 1, 5, 3 ,8, 2};
	int tamanho = 12;


	int *p = list(l, tamanho);

	for (int i = 0; p[i]; ++i)
	{
		printf("%d\n",p[i]);
	}

}