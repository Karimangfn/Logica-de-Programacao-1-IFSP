#include <stdio.h>
#include <string.h>


main (){
	struct CAD_LIVRO
  {
  	char titulo[8][30];
    int ano[5];
    int paginas[5];  
    float preco[5];
  };
  struct CAD_LIVRO LIVRO;
  int i;
  int soma;
  float maior;
  int media;
  char nome[5];
  
  for (i=0;i<=4;i++){
   	printf("Titulo do livro N%d: ", i+1); 
	gets(LIVRO.titulo[i]);
	printf("Ano da Edicao: "); 
	scanf("%d",&LIVRO.ano[i]);
	printf("Numero de Paginas: "); 
	scanf("%d",&LIVRO.paginas[i]);
	printf("Preco: "); 
	scanf("%f",&LIVRO.preco[i]);
	fflush(stdin);
	system("cls");
	
	soma += LIVRO.paginas[i];
	
	if (LIVRO.preco[i] > maior){
   		maior = LIVRO.preco[i];
   		strcpy(nome,LIVRO.titulo[i]);
        }  
  }

   
   media = soma;
   
   for (i=0;i<=4;i++){
   	printf("Titulo N%d: %s \n",i+1, LIVRO.titulo[i]); 
	printf("Ano da Edicao: %d \n", LIVRO.ano[i]); 
	printf("Numero de Paginas: %d \n", LIVRO.paginas[i]); 
	printf("Preco: %4.2f \n", LIVRO.preco[i]);
	printf("\n"); 
   }
   
   printf("Media de paginas dos livros: %d \n\n", soma/5);
   printf("Livro mais caro: %s \n", nome);
   printf("Preco: %4.2f \n" , maior);
}
