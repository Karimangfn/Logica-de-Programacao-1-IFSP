#include <stdio.h>   
#include <locale.h> 

main() {

float temp[10];
float temp2[10];
int contador;

setlocale(LC_ALL, "Portuguese");


for(contador=1; contador<=10; contador++){
	printf("Digite os valores da Temperatura N%d em graus Farenheit : ",contador);
    scanf("%f",&temp[contador]);
  }
  
  for(contador=1; contador<=10; contador++){
  	temp2[contador] = (0.55555*(temp[contador]-32));
  }
  system("cls");
 
	for(contador=1; contador<=10; contador++){
	printf("\nOs valores da Temperatura N%d em graus Farenheit sao: %.0f°F  ",contador,temp[contador]);
  }
  printf("\n");
  for(contador=1; contador<=10; contador++){
  	printf("\nOs valores da Temperatura N%d em graus Celsius sao: %.4f°C  ",contador,temp2[contador]);
  }
  
}
	


