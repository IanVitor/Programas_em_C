#include<stdio.h>
#include<locale.h>
#define QTD 10

//Estrutura para definir novos membros.
typedef struct
{
	char PlacaCarro[9];
	char Marca[16];
	char Hora[6];
}entrada;

//Fun��o para solicitar os dados do usu�rio.
entrada ObterDadosDaVaga(int c)
{
	entrada Dados;
	printf("Qual � a placa do carro %i:", c+1);
	gets(Dados.PlacaCarro);
	printf("Qual � a marca do carro %i:", c+1);
	gets(Dados.Marca);
	printf("Qual � a hora de entrada:");
	gets(Dados.Hora);
	return Dados;
}

int main()
{
	setlocale(LC_ALL, "");
	entrada Vagas[QTD];
	int c;
	
	//La�o para preencher o vetor Vagas.
	for(c=0;c<QTD;c++)
	{
		Vagas[c] = ObterDadosDaVaga(c);
		printf("\n");
	}

	//La�o para mostrar os dados coletados.
	for(c=0;c<QTD;c++)
	{
		printf("\nCarro %i->", c+1);
		printf("\n\tPlaca: %s", Vagas[c].PlacaCarro);
		printf("\n\tMarca: %s", Vagas[c].Marca);
		printf("\n\tHora:  %s", Vagas[c].Hora);
		printf("\n");
	}

	getchar();

	return 0;
}
