#include<stdio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "");
	char palavra[31];
	int i;
	
	//Imput da frase
	printf("Digite uma palavra de at� 30 letras:\n");
	scanf("%[^\n]s", &palavra);
	
	//La�o para ler o vetor
	for(i=0;i<31;i++)
	{
		//Alterar as maiusc�las para n�o dar erro
		palavra[i] = tolower(palavra[i]);
		
		//Condi��o para separar as vogais
		if(palavra[i]=='a' || palavra[i]=='e'|| palavra[i]=='i'|| palavra[i]=='o'|| palavra[i]=='u')
		{
			printf("?");
		}
		else
		{
			printf("%c", palavra[i]);
		}
		
		//Condicional para dar break no NULL
		if(palavra[i]=='\0')
		{
			break;
		}
	}
}
