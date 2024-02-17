#include <stdio.h>

main(){
	int A[12];
	int B[12];	
	int C[24];
	int contador;
	int parada = 0;
	
	
	for(contador=1; contador<=12;){
	printf("Digite o %d valor de A: ", contador);
	scanf("%d", &A[contador]);
		if (A[contador] % 3 == 0 || A[contador] % 7 == 0){
			contador++;	
			parada++;
			
	    }
		else{
			printf("Apenas sao aceitos numeros divisiveis por 3 e 7\n");
		}
   }
   system("cls");
   
   for(contador=1; contador <= 12; contador++){
		printf("\nOs Valores de A sao: %d ",A[contador]);
    }
    printf("\n");
   
   for (contador=1; contador <= 12; contador++){
   	if (A[contador] % 5 != 0){
   		B[contador] = A[contador];
   		printf("\nOs Valores de B sao: %d",B[contador]);
	   }
    }
    
	
   
   printf("\n");
   
   for(contador=1; contador<=12; contador++){
	if (A[contador] % 3 == 0 || A[contador] % 7 == 0){
		C[contador] = A[contador];
	printf("\nOs Valores de C sao: %d ",C[contador]);		
	    }
    }
	    
	for(contador=1; contador<= 12; contador++){
	 if (A[contador] % 5 != 0){
	 	C[contador] = B[contador];
	printf("\nOs Valores de C sao: %d ",C[contador]);
	 }
     }
	
}
