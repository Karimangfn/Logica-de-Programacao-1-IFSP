#include <stdio.h>
#include <locale.h> 

main(){
	int A[10];
	int B[10];	
	int C[20];
	int contador;
	
	for(contador=1; contador<=10; contador++){
	printf("Digite o valor N%d de A: ",contador);
    scanf("%d",&A[contador]);
}
	printf("\n");
	
	for(contador=1; contador<=10; contador++){
	printf("Digite o valor N%d de B: ",contador);
	scanf("%d", &B[contador]);
    
}

	for(contador=1; contador<=10; contador++){
	C[contador] = A[contador];
	printf("\nOs Valores de C sao: %d ",C[contador]);
	C[contador] = B[contador];
	printf("\nOs Valores de C sao: %d ",C[contador]);
}

}
