#include<stdio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "");
	int N, valor, aux, c=0;
	int resultado[10];
	
	printf("Digite um número decimal:");
	scanf("%i", &N);

	while(N>0)
	{
		if(N%2==1)
		{
			resultado[c] = 1;
		}
		else
		{
			resultado[c] = 0;
		}
		N /=2;
		c+= 1;
	}
	aux = c-1;
	printf("\nValor em binário: ");
	for(c=aux;c>=0;c--)
	{
		printf("%i",resultado[c]);
	}
}
