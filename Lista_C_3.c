#include<stdio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "");
	int N, c;
	
	printf("Qual o número da tabuada:");
	scanf("%i", &N);

	for(c=0;c<10;c++)
	{
		printf("\n%i X %i = %i", c+1, N, (c+1)*N );
	}
}

