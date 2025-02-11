#include <stdio.h>

main (){
	int Soma,Subt,Produto;
	float N1,N2,Divisao,Media;
	
	printf("Digite o Primeiro Numero Inteiro Diferente de Zero : ");
    scanf("%f", &N1);
    printf("Digite o Segundo Numero Inteiro Diferente de Zero: ");
    scanf("%f", &N2); 
    
    Soma = N1 + N2;
    Subt = N1 - N2;
    Produto = N1 * N2;
    Divisao = N1 / N2;
	Media = (N1 + N2)/2;
	
	printf("\n A Soma entre %.0f e %.0f e.....: %d" ,N1, N2, Soma);
    printf("\n A Subtracao entre %.0f e %.0f e: %d",N1 , N2, Subt);
    printf("\n O Produto  entre %.0f e %.0f e.: %d",N1 , N2,  Produto);
    printf("\n A Divisao entre %.0f e %.0f e .: %.2f",N1 , N2, Divisao);
    printf("\n A Media entre %.0f e %.0f e: ..: %.2f",N1 ,N2, Media);
		
}
