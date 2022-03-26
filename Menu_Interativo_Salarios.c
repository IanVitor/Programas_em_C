#include <stdio.h>
#include <locale.h>
#define QTD 10

float vSalarios[QTD];

//Fun��o para adicionar valores ao vetor.
void Adicionar(float salarios[QTD]){
	
	int i;
	
	for(i=0;i<QTD;i++){
		printf("%d - ", i);
		scanf("%f", &salarios[i]);
	}
}

//Fun��o que mostra os valores na tela.
void Imprimir(float salarios[QTD]){
	
	int i;
	
	for(i=0;i<QTD;i++){
		printf("%d - R$ %.2f\n", i, salarios[i]);
	}
}

//Fun��o que soma todos os valores.
float SomarSalarios(float salarios[QTD]){
	
	int i;
	float Soma=0;
	
	for(i=0;i<QTD;i++){
		Soma += salarios[i];
	}
	
	return Soma;
}

//Fun��o que calcula a m�dia entre os sal�rios.
float MaiorSalario(float salarios[QTD]){
	
	float Maior=salarios[0];
	int i;
	
	for(i=0;i<QTD;i++){
		
		if(Maior<salarios[i]){
			Maior = salarios[i];
		}
	}
	
	
	return Maior;
}

//Fun��o que mostra os valores menores que X.
void AcrescimoZ(float salarios[QTD]){
	
	float Z;
	int i;
	
	printf("Qual � o valor de Z:");
	scanf("%f", &Z);
	
	printf("\nValores com acr�scimo:\n");
	
	for(i=0;i<QTD;i++){
		salarios[i] += (salarios[i] * Z) /100;
		printf("%d - R$ %.2f\n", i, salarios[i]);
	}
}

int main(){
	setlocale(LC_ALL, "");
	
	int opc;
	
	while (opc != 99) {
		
		switch (opc){
			case 1:
				printf("\nAdicionar Sal�rios:\n");
				Adicionar(vSalarios);
				break;
			case 3:
				printf("\nImprimir Sal�rios:\n");
				Imprimir(vSalarios);
				break;
			case 7:
				printf("\nSomar Sal�rios:\n");
				printf("R$ %.2f\n", SomarSalarios(vSalarios));
				break;
			case 12:
				printf("\nMaior Sal�rio:\n");
				printf("R$ %.2f\n", MaiorSalario(vSalarios));
				break;
			case 19:
				AcrescimoZ(vSalarios);
				break;
		}
		
		//Menu que mostra ao usu�rio as op��es dispon�veis.
		printf("\n");
		printf(":: Menu - Sal�rios :: \n");
		printf("01. Adicionar  \n");
		printf("03. Imprimir todos \n");
		printf("07. Somar sal�rios \n");
		printf("12. Maior Sal�rio \n");
		printf("19. Aplicar acr�scimo de Z% \n");
		printf("99. Sair \n\n");
		printf("Digite a opcao desejada: ");
		scanf("%d", &opc);
	}
	
	return 0;
}
