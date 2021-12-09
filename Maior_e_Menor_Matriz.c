#include <stdio.h>

void main(){
	//Declaração de variáveis
	int mat[3][3];
	int Maior, Menor, C, J;
	//Laço para preencher a matriz
	for(C=0;C<3;C++)
	{
		for(J=0;J<3;J++)
		{
			printf("linha %i coluna %i:", C+1, J+1);
			scanf("%i", &mat[C][J]);
		}
			printf("\n");
	}
	//Gambiarra para inicializar as variáveis
	Menor = mat[0][0];
	Maior = mat[0][0];
	//Laço para comparar as variáveis e distribui-lás 
	for(C=0;C<3;C++)
		for(J=0;J<3;J++)
		{
			if(mat[C][J] > Maior)
			{
				Maior = mat[C] [J];
			}
			else
			{
				if(mat[C][J]< Menor)
				{
					Menor = mat[C][J];
				}
			}
		}
	printf("Maior = %i\nMenor = %i", Maior, Menor);
}
