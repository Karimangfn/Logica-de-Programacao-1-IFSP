#include <stdio.h>

main(){
	float Quilos,Gramas,Pao,Faturamento;
	
	printf("Digite o Peso da Farinha Comprada(Kg): ");
	scanf("%f", &Quilos);
	printf("\nDigite o Peso necessario para se fazer um Pao(g): ");
	scanf("%f", &Gramas);
	
	Pao = Quilos / (Gramas / 1000);
	Faturamento = Pao * 0.50;
	
	printf("\nVao ser produzidos %0.f Paes", Pao);
	printf("\nO Faturamento dos Paes a R$ 0,50 a unidade sera de %0.f Reais", Faturamento);
	
}
