#include <stdio.h>

main(){
	float real,dolar,euro,peso,iene;
	
	printf("Digite um valor em Reais(R$) ");
	scanf("%f", &real);
	
	dolar = real * 0.20;
	euro = real * 0.16;
	peso = real * 18.66; //Peso Argentino
	iene = real	* 21.54;
	
	printf("\n Valor em Reais: R$%.2f", real);
	printf("\n Valor em Dolares: $%.2f", dolar);
	printf("\n Valor em Euros: %.2f", euro);
	printf("\n Valor em Pesos Argentinos: %.2f", peso);
	printf("\n Valor em Ienes: %.2f \n", iene);
	
	printf("\n Um Dolar vale R$5,08, Diferenca de R$%.2f do valor origial" ,(real - dolar));
	printf("\n Um Euro vale R$6,18, Diferenca de R$%.2f do valor original" ,(real - euro));
	printf("\n Um Peso Argentino vale R$0,054, Diferenca de R$%.2f do valor original" ,(peso - real));
	printf("\n Um Iene vale R$0,046, Diferenca de R$%.2f do valor original" ,(iene - real));
}
