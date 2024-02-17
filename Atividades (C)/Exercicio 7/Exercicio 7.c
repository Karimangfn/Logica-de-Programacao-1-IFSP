#include<stdio.h>   


main() {

float nota[10];
float media;
float total;
int contador;

	
	for(contador=1; contador<=10; contador++){
		printf("Digite a  nota N%d do aluno : ",contador);
    	scanf("%f",&nota[contador]);
  }
  system("cls");
  
 	for (contador=1 ; contador<11 ;contador++){
     	printf("A nota N%d  do aluno e: %.1f\n",contador,nota[contador]);
    }
    
    for (contador=1 ; contador<11 ;contador++){
		total += nota[contador];	
	}
	
	printf("\n");
	media = total/10;
	
	printf("A media do aluno e: %.1f",media);
		if (media >= 8){
			printf("\nPlenamente Satisfatorio (PS)");
		}
		else if (media < 8 && media >= 6){
			printf("\nSatisfatorio (S)");
		}
		else if (media < 6 && media >= 4){
			printf("\nRegular (R)");
		}
		else{
			printf("\nInsatisfatorio (I)");
		}
	
}	
