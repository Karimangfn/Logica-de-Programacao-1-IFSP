#include <stdio.h>
#include <locale.h> 

main(){
	char A[10];
	char B[10];	
	int contador;
	int contador2;
	int resposta = 5;
	int alunos;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o Numero de alunos: ");
	scanf("%d", &alunos);
	printf("\n");
	
	printf("Cartão de gabarito da prova\n");
	for(contador=1; contador<=10; contador++){
	printf("Digite a alternativa correta da Pergunta N%d:",contador);
    scanf("%s",&A[contador]);
}
	printf("\n");
	
	
	for(contador2=1; contador2 <= alunos;contador2++){
		resposta = resposta - resposta;
	printf("\nAluno N%d: \n",contador2);
		for(contador=1; contador<=10; contador++){
		printf("Digite a Alternativa correta da Questao N%d:",contador);
		scanf("%s", &B[contador]);
		if (A[contador] == B[contador]){
		resposta++;
    }
		}
		
    printf("\nO Aluno N%d Acertou %d Questões e Marcou %d pontos\n",contador2,resposta,resposta);
	}

}
