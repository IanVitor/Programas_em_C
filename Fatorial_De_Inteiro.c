#include<stdio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "");
	int Numero, c, aux, Resultado=1;
	
	printf("Digite um número inteiro e positivo:");
	scanf("%i", &Numero);
	aux = Numero;
	
	printf("\nO fatorial de %i é:", Numero);
	
	if(Numero == 1 || Numero == 0)
	{
		Resultado = 1;
	}
	else
	{
		for(c=0;c<Numero;c++)
		{
			Resultado *= Numero-c;
		}
	}
	printf(" %i", Resultado);

}

