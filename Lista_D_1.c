#include<stdio.h>
#include<locale.h>
#define QTD 30

int main()
{
	setlocale(LC_ALL, "");
	char texto[QTD];
	int c=0;
	
	printf("Digite um texto de até 30 palavras:");
	scanf("%[^\n]s", &texto[c]);
	
	printf("Palavra ao contrário: ");
	
	for(c=QTD;c>=0;c--)
	{
		if(texto[c]!='\0')
			printf("%c", texto[c]);
	}
	return 0;
}

