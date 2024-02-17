#include <stdio.h>
#include <locale.h>

main (){
	setlocale(LC_ALL, "Portuguese");
	
	struct	CAD_Banda{
	char nome[30];
	char musica[30];
	int integrantes;
	int ranking;
	};
	struct CAD_Banda Banda[30];
	int i;
	for(i=0; i<=9; i++){
	printf("Nome da Banda de Musica N%d: ", i+1);
	gets(Banda[i].nome);
	printf("Tipo de musica que ela toca: ");
	gets(Banda[i].musica);
	printf("Numero de integrantes: ");
	scanf("%d", &Banda[i].integrantes);
	printf("Qual a posicao do ranking essa banda está dentre as suas bandas favoritas: ");
	scanf("%d", &Banda[i].ranking);
	fflush(stdin);
	system("cls");
    }
    
    for(i=0; i<=9; i++){
	printf("\nNome da Banda de Musica N%d: %s \n", i+1,Banda[i].nome);
	printf("Tipo de musica que ela toca: %s\n", Banda[i].musica);
	printf("Numero de integrantes da banda: %d \n", Banda[i].integrantes);
	printf("Posicao no Ranking: %dº \n", Banda[i].ranking);
    }
    
    
}
