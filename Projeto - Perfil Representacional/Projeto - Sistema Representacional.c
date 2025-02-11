#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

char matricula[10];
char login1[20]="MASTER";
char login[20];
char N1;
void teste();
void master();
void questionario();
void visuquestionario();
void sobreteste();


main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	char login1[20]="MASTER";
	int retorno;
	
	printf("\n\nDIGITE SEU NOME: ");
	gets(login);
	printf("\n\nDIGITE SEU PRONTUÁRIO: ");
	scanf("%s", &matricula); 
	
    retorno = strcmp(login, login1);
    
    if(retorno == 0)
    	
    	master();
    else 
		teste();
    
}

void master(){ //tela de menu
	system("cls");
	
	do{
	   printf("================================================================\n");
	   printf("               TESTE DOS SISTEMAS REPRESENTACIONAIS \n");
       printf("================================================================\n");
       printf("               1. Cadastrar questionário                   \n");
       printf("               2. Visualizar questionário   \n");
       printf("               3. Realizar teste \n");
       printf("               4. Sobre o teste                    \n");
       printf("               F. Fim \n");
       printf("================================================================\n");
       printf("               Escolha -> ", N1);
       scanf("%s", &N1);
       system("cls");
       
	   	if (N1 == '1'){
	   		questionario();
		   }
	   		
	   	else if (N1 == '2'){
	   		visuquestionario();
		   }
	   		
	   	else if (N1 == '3'){
	   		teste();
		   }
	   		 
	   	else if (N1 == '4'){
			sobreteste();
		}
		
		else if(N1 == 'F'){
			system("exit");
	    }
	    
	    else if(N1 == 'f'){
			system("exit");
	    }
	    else{
	    	printf("ERRO AO ESCOLHER\n");	
		}
	
		
	system("pause");
	system("cls");
	}while(N1 > 5 && N1 != 'F' && N1 != 'f');

}

void questionario(){ //opcao 1 mestre
	
	int contador;
	char frase[100][100];
	char item_1[100][100];
	char item_2[100][100];
	char item_3[100][100];
	char item_4[100][100];
	char titulo1[20] = "frase";
	char titulo2[20] = "C";
	char titulo3[20] = "item_1";
	char titulo4[20] = "A";
	char titulo5[20] = "item_2";
	char titulo6[20] = "V";
	char titulo7[20] = "item_3";
	char titulo8[20] = "D";
	char titulo9[20] = "item_4";
	
		fgets(frase[0],100,stdin);
		printf("Digite a 1º frase do questionario: ");
		fgets(frase[0],100,stdin);
		frase[0][strcspn(frase[0], "\n")] = 0; //para nao pular linha sozinho
		printf("Digite a alternativa A: ");
		fgets(item_1[0],100,stdin);
		item_1[0][strcspn(item_1[0], "\n")] = 0;
		printf("Digite a alternativa B: ");
		fgets(item_2[0],100,stdin);
		item_2[0][strcspn(item_2[0], "\n")] = 0;
		printf("Digite a alternativa C: ");
		fgets(item_3[0],100,stdin);
		item_3[0][strcspn(item_3[0], "\n")] = 0;
		printf("Digite a alternativa D: ");
		fgets(item_4[0],100,stdin);
		item_4[0][strcspn(item_4[0], "\n")] = 0;
		system("cls");
		
		printf("Digite a 2º frase do questionario: ");
		fgets(frase[1],100,stdin);
		frase[1][strcspn(frase[1], "\n")] = 0;
		printf("Digite a alternativa A: ");
		fgets(item_1[1],100,stdin);
		item_1[1][strcspn(item_1[1], "\n")] = 0;
		printf("Digite a alternativa B: ");
		fgets(item_2[1],100,stdin);
		item_2[1][strcspn(item_2[1], "\n")] = 0;
		printf("Digite a alternativa C: ");
		fgets(item_3[1],100,stdin);
		item_3[1][strcspn(item_3[1], "\n")] = 0;
		printf("Digite a alternativa D: ");
		fgets(item_4[1],100,stdin);
		item_4[1][strcspn(item_4[1], "\n")] = 0;
		system("cls");
		
		printf("Digite a 3º frase do questionario: ");
		fgets(frase[2],100,stdin);
		frase[2][strcspn(frase[2], "\n")] = 0;
		printf("Digite a alternativa A: ");
		fgets(item_1[2],100,stdin);
		item_1[2][strcspn(item_1[2], "\n")] = 0;
		printf("Digite a alternativa B: ");
		fgets(item_2[2],100,stdin);
		item_2[2][strcspn(item_2[2], "\n")] = 0;
		printf("Digite a alternativa C: ");
		fgets(item_3[2],100,stdin);
		item_3[2][strcspn(item_3[2], "\n")] = 0;
		printf("Digite a alternativa D: ");
		fgets(item_4[2],100,stdin);
		item_4[2][strcspn(item_4[2], "\n")] = 0;
		system("cls");
		
		printf("Digite a 4º frase do questionario: ");
		fgets(frase[3],100,stdin);
		frase[3][strcspn(frase[3], "\n")] = 0;
		printf("Digite a alternativa A: ");
		fgets(item_1[3],100,stdin);
		item_1[3][strcspn(item_1[3], "\n")] = 0;
		printf("Digite a alternativa B: ");
		fgets(item_2[3],100,stdin);
		item_2[3][strcspn(item_2[3], "\n")] = 0;
		printf("Digite a alternativa C: ");
		fgets(item_3[3],100,stdin);
		item_3[3][strcspn(item_3[3], "\n")] = 0;
		printf("Digite a alternativa D: ");
		fgets(item_4[3],100,stdin);
		item_4[3][strcspn(item_4[3], "\n")] = 0;
		system("cls");
		
		printf("Digite a 5º frase do questionario: ");
		fgets(frase[4],100,stdin);
		frase[4][strcspn(frase[4], "\n")] = 0;
		printf("Digite a alternativa A: ");
		fgets(item_1[4],100,stdin);
		item_1[4][strcspn(item_1[4], "\n")] = 0;
		printf("Digite a alternativa B: ");
		fgets(item_2[4],100,stdin);
		item_2[4][strcspn(item_2[4], "\n")] = 0;
		printf("Digite a alternativa C: ");
		fgets(item_3[4],100,stdin);
		item_3[4][strcspn(item_3[4], "\n")] = 0;
		printf("Digite a alternativa D: ");
		fgets(item_4[4],100,stdin);
		item_4[4][strcspn(item_4[4], "\n")] = 0;
		system("cls");
		
		printf("Um Arquivo TESTE_SISTEMA_REPRESENTACIONAL.DAT foi criado com as informações do seu questionário\n\n");
		
	FILE *arquivo1;
	
	arquivo1 = fopen("TESTE_SISTEMA_REPRESENTACIONAL.DAT","w");
	fprintf(arquivo1,"NroFrase %35s     %36s    %36s   %35s    %37s %36s %37s %38s %38s      \n",titulo1,titulo2,titulo3,titulo4,titulo5,titulo6,titulo7,titulo8,titulo9);
	fprintf(arquivo1,"=====================================================================================================================================================================================================================================================================================================================================================================================================\n");
	fprintf(arquivo1,"1        %70s     0 %70s      0 %70s      0 %70s     0 %70s                                      \n",frase[0],item_1[0],item_2[0],item_3[0],item_4[0]);
	fprintf(arquivo1,"2        %70s     0 %70s      0 %70s      0 %70s     0 %70s                                      \n",frase[1],item_1[1],item_2[1],item_3[1],item_4[1]);
	fprintf(arquivo1,"3        %70s     0 %70s      0 %70s      0 %70s     0 %70s                                      \n",frase[2],item_1[2],item_2[2],item_3[2],item_4[2]);
	fprintf(arquivo1,"4        %70s     0 %70s      0 %70s      0 %70s     0 %70s                                      \n",frase[3],item_1[3],item_2[3],item_3[3],item_4[3]);
	fprintf(arquivo1,"5        %70s     0 %70s      0 %70s      0 %70s     0 %70s                                      \n",frase[4],item_1[4],item_2[4],item_3[4],item_4[4]);
	fprintf(arquivo1,"=====================================================================================================================================================================================================================================================================================================================================================================================================\n");
	fclose(arquivo1);
	
}

void visuquestionario(){ //opcao 2 mestre
	void copiarConteudo(FILE *arquivo, FILE *arquivo2);
	
	FILE *arquivo = fopen("TESTE_SISTEMA_REPRESENTACIONAL.DAT","r"); 
	FILE *arquivo2 = fopen("QUESTIONÁRIO_1.txt", "w");
 
	copiarConteudo(arquivo, arquivo2);
	
	fclose(arquivo);
	fclose(arquivo2);
	
	printf("Um Arquivo QUESTIONÁRIO_1.txt foi criado com as informações do arquivo TESTE_SISTEMA_REPRESENTACIONAL.DAT\n\n");
}

void copiarConteudo(FILE *arquivo, FILE *arquivo2){ //copiar conteudo de um arquivo para o outro
	 char leitor[1000];
	 
	 while (fgets(leitor, 1000, arquivo) != NULL)
	 
	 fputs(leitor, arquivo2);
}

void instrucao(){ //Cabeçalho do Teste
	system("cls");
	
	printf("Nas Frases a seguir, pontue com:\n");
	printf("4 a que melhor descreve voce\n");
	printf("3 a proxima melhor descricao\n");
	printf("2 a proxima melhor; e\n");
	printf("1 aquela que menos descreve voce\n\n");
}

void teste(){ //Opçao 3 Mestre ou Teste do Usuario : Realiza o teste
	int a,b,c,d,a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3,a4,b4,c4,d4;
	
	instrucao();
	printf("1. Eu tomo decisões importantes baseado em\n");
	printf("a) intuicao\n");
	printf("b) o que me soa melhor\n");
	printf("c) o que me parece melhor\n");
	printf("d) um estudo preciso e minucioso do assunto\n");
	do{
	printf("[a]-> ");
	scanf("%d", &a);
	if (a > 4){
	 printf("São Apenas aceitos números de 1 a 4\n");	
	}
    }while(a > 4);
    
	do{
	printf("\n[b]-> ");
	scanf("%d", &b);
	if (b != 4 && b != 3 && b != 2 && b != 1){
		printf("São Apenas aceitos números de 1 a 4");
	}
	else if (b == a){
		printf("Você não pode digitar o mesmo número usado na letra anterior");
	}
    }while(b == a || b != 4 && b != 3 && b != 2 && b != 1);
    
    do{
	printf("\n[c]-> ");
	scanf("%d", &c);
	if (c != 4 && c != 3 && c != 2 && c != 1){
		printf("São Apenas aceitos números de 1 a 4");
	}
	if (c == a || c == b){
		printf("Você não pode digitar o mesmos números usados nas letras anteriores");
	}
    }while(c == a || c == b || c != 4 && c != 3 && c != 2 && c != 1);
    
    do{
	printf("\n[d]-> ");
	scanf("%d", &d);
	if (d != 4 && d != 3 && d != 2 && d != 1){
		printf("São Apenas aceitos números de 1 a 4");
	}
	if (d == a || d == b || d == c){
		printf("Você não pode digitar o mesmos números usados nas letras anteriores");
	}
    }while(d == a || d == b || d == c || d != 4 && d != 3 && d != 2 && d != 1);
	
	instrucao();
	printf("2. Durante uma discussão eu sou mais influenciado por\n");
	printf("a) o tom da voz da outra pessoa\n");
	printf("b) se eu posso ou não ver o argumento da outra pessoa\n");
	printf("c) a lógica do argumento da outra pessoa\n");
	printf("d) se eu entro em contato ou não com os sentimentos reais do outro\n");
	do{
	printf("[a]-> ");
	scanf("%d", &a1);
	if (a1 > 4){
	 printf("São Apenas aceitos números de 1 a 4\n");
	}
    }while(a1 > 4);
    
	do{
	printf("\n[b]-> ");
	scanf("%d", &b1);
	if (b1 != 4 && b1 != 3 && b1 != 2 && b1 != 1){
		printf("São Apenas aceitos números de 1 a 4");
	}
	else if (b1 == a1){
		printf("Você não pode digitar o mesmo número usado na letra anterior");
	}
    }while(b1 == a1 || b1 != 4 && b1 != 3 && b1 != 2 && b1 != 1);
    
    do{
	printf("\n[c]-> ");
	scanf("%d", &c1);
	if (c1 != 4 && c1 != 3 && c1 != 2 && c1 != 1){
		printf("São Apenas aceitos números de 1 a 4");
	}
	if (c1 == a1 || c1 == b1){
		printf("Você não pode digitar o mesmos números usados nas letras anteriores");
	}
    }while(c1 == a1 || c1 == b1 || c1 != 4 && c1 != 3 && c1 != 2 && c1 != 1);
    
    do{
	printf("\n[d]-> ");
	scanf("%d", &d1);
	if (d1 != 4 && d1 != 3 && d1 != 2 && d1 != 1){
		printf("São Apenas aceitos números de 1 a 4");
	}
	if (d1 == a1 || d1 == b1 || d1 == c1){
		printf("Você não pode digitar o mesmos números usados nas letras anteriores");
	}
    }while(d1 == a1 || d1 == b1 || d1 == c1 || d1 != 4 && d1 != 3 && d1 != 2 && d1 != 1);
	
	instrucao();
	printf("3. Eu comunico mais facilmente o que se passa comigo\n");
	printf("a) do modo como me visto e aparento\n");
	printf("b) pelos sentimentos que compartilho\n");
	printf("c) pelas palavras que escolho\n");
	printf("d) pelo tom da minha voz\n");
	do{
	printf("[a]-> ");
	scanf("%d", &a2);
	if (a2 > 4){
	 printf("São Apenas aceitos números de 1 a 4\n");	
	}
    }while(a2 > 4);
    
	do{
	printf("\n[b]-> ");
	scanf("%d", &b2);
	if (b2 != 4 && b2 != 3 && b2 != 2 && b2 != 1){
		printf("São Apenas aceitos números de 1 a 4");
	}
	else if (b2 == a2){
		printf("Você não pode digitar o mesmo número usado na letra anterior");
	}
    }while(b2 == a2 || b2 != 4 && b2 != 3 && b2 != 2 && b2 != 1);
    
    do{
	printf("\n[c]-> ");
	scanf("%d", &c2);
	if (c2 != 4 && c2 != 3 && c2 != 2 && c2 != 1){
		printf("São Apenas aceitos números de 1 a 4");
	}
	if (c2 == a2 || c2 == b2){
		printf("Você não pode digitar o mesmos números usados nas letras anteriores");
	}
    }while(c2 == a2 || c2 == b2 || c2 != 4 && c2 != 3 && c2 != 2 && c2 != 1);
    
    do{
	printf("\n[d]-> ");
	scanf("%d", &d2);
	if (d2 != 4 && d2 != 3 && d2 != 2 && d2 != 1){
		printf("São Apenas aceitos números de 1 a 4");
	}
	if (d2 == a2 || d2 == b2 || d2 == c2){
		printf("Você não pode digitar o mesmos números usados nas letras anteriores");
	}
    }while(d2 == a2 || d2 == b2 || d2 == c2 || d2 != 4 && d2 != 3 && d2 != 2 && d2 != 1);
	
	instrucao();
	printf("4. É muito fácil para mim\n");
	printf("a) achar o volume e a sintonia ideais num sistema de som\n");
	printf("b) selecionar o ponto mais relevante relativo a um assunto interessante\n");
	printf("c) escolher os móveis mais confortáveis\n");
	printf("d) escolher as combinações de cores mais ricas e atraentes\n");
	do{
	printf("[a]-> ");
	scanf("%d", &a3);
	if (a3 > 4){
	 printf("São Apenas aceitos números de 1 a 4\n");	
	}
    }while(a3 > 4);
    
	do{
	printf("\n[b]-> ");
	scanf("%d", &b3);
	if (b3 != 4 && b3 != 3 && b3 != 2 && b3 != 1){
		printf("São Apenas aceitos números de 1 a 4");
	}
	else if (b3 == a3){
		printf("Você não pode digitar o mesmo número usado na letra anterior");
	}
    }while(b3 == a3 || b3 != 4 && b3 != 3 && b3 != 2 && b3 != 1);
    
    do{
	printf("\n[c]-> ");
	scanf("%d", &c3);
	if (c3 != 4 && c3 != 3 && c3 != 2 && c3 != 1){
		printf("São Apenas aceitos números de 1 a 4");
	}
	if (c3 == a3 || c3 == b3){
		printf("Você não pode digitar o mesmos números usados nas letras anteriores");
	}
    }while(c3 == a3 || c3 == b3 || c3 != 4 && c3 != 3 && c3 != 2 && c3 != 1);
    
    do{
	printf("\n[d]-> ");
	scanf("%d", &d3);
	if (d3 != 4 && d3 != 3 && d3 != 2 && d3 != 1){
		printf("São Apenas aceitos números de 1 a 4");
	}
	if (d3 == a3 || d3 == b3 || d3 == c3){
		printf("Você não pode digitar o mesmos números usados nas letras anteriores");
	}
    }while(d3 == a3 || d3 == b3 || d3 == c3 || d3 != 4 && d3 != 3 && d3 != 2 && d3 != 1);
	
	instrucao();
	printf("5. Eu me percebo assim\n");
	printf("a) se estou muito em sintonia com os sons dos ambientes\n");
	printf("b) se sou muito capaz de raciocinar com fatos e dados novos\n");
	printf("c) eu sou muito sensível a maneira como a roupa veste o meu corpo\n");
	printf("d) eu respondo fortemente as cores e a aparência de uma sala\n");
	do{
	printf("[a]-> ");
	scanf("%d", &a4);
	if (a4 > 4){
	 printf("São Apenas aceitos números de 1 a 4\n");	
	}
    }while(a4 > 4);
    
	do{
	printf("\n[b]-> ");
	scanf("%d", &b4);
	if (b4 != 4 && b4 != 3 && b4 != 2 && b4 != 1){
		printf("São Apenas aceitos números de 1 a 4");
	}
	else if (b4 == a4){
		printf("Você não pode digitar o mesmo número usado na letra anterior");
	}
    }while(b4 == a4 || b4 != 4 && b4 != 3 && b4 != 2 && b4 != 1);
    
    do{
	printf("\n[c]-> ");
	scanf("%d", &c4);
	if (c4 != 4 && c4 != 3 && c4 != 2 && c4 != 1){
		printf("São Apenas aceitos números de 1 a 4");
	}
	if (c4 == a4 || c4 == b4){
		printf("Você não pode digitar o mesmos números usados nas letras anteriores");
	}
    }while(c4 == a4 || c4 == b4 || c4 != 4 && c4 != 3 && c4 != 2 && c4 != 1);
    
    do{
	printf("\n[d]-> ");
	scanf("%d", &d4);
	if (d4 != 4 && d4 != 3 && d4 != 2 && d4 != 1){
		printf("São Apenas aceitos números de 1 a 4");
	}
	if (d4 == a4 || d4 == b4 || d4 == c4){
		printf("Você não pode digitar o mesmos números usados nas letras anteriores");
	}
    }while(d4 == a4 || d4 == b4 || d4 == c4 || d4 != 4 && d4 != 3 && d4 != 2 && d4 != 1);
	
	int somaA = a + a1 + a2 + a3 + a4;
	int somaB = b + b1 + b2 + b3 + b4;
	int somaC = c + c1 + c2 + c3 + c4;
	int somaD = d + d1 + d2 + d3 + d4;
	
	if (somaA > somaB && somaA > somaC && somaA > somaD){
		printf("\nSeu perfil representacional é Cinestesico, Consulte o Arquivo txt para mais informações\n");
		char resultado[15] = "Cinestesico";
		char filename[200];
	
	sprintf(filename, "%s_%s_%s.txt", resultado, login, matricula);
	FILE *arquivo3 = fopen (filename,"w");
	fprintf(arquivo3, "======================= PERFIL REPRESENTACIONAL DE %s =======================\n", login);
	fprintf(arquivo3, " %d%% Visual   %d%% Auditivo   %d%% Cinestesico   %d%% Digital\n",2*somaC,2*somaB,2*somaA,2*somaD);
	fprintf(arquivo3, "==============================================================================\n\n");
	fprintf(arquivo3, "Algumas pessoas captam melhor as mensagens do mundo exterior através da audição, são as pessoas chamadas auditivas.\n");
	fprintf(arquivo3, "Outras pessoas sentem necessidade de perguntar muito, necessitam de muitas informações e fatos. Estas são as digitais.\n");
	fprintf(arquivo3, "As cinestésicas aprendem melhor por meio das sensações táteis, como o tato, a temperatura, a umidade, as sensações internas e as emoções.\n");
	fprintf(arquivo3, "Já as pessoas visuais aprendem melhor quando se valendo da visão.\n\n");
	fprintf(arquivo3, "===============================================================================\n");
	fprintf(arquivo3, "Seu Perfil é %s\n", resultado);
	fprintf(arquivo3, "===============================================================================");
	fclose(arquivo3);
		
	}
	else if (somaB > somaA && somaB > somaC && somaB > somaD){
		printf("\nSeu perfil representacional é Auditivo, Consulte o Arquivo txt para mais informações\n");
		char resultado[15] = "Auditivo";
		char filename[200];
	
	sprintf(filename, "%s_%s_%s.txt", resultado, login, matricula);
	FILE *arquivo3 = fopen (filename,"w");
	fprintf(arquivo3, "======================= PERFIL REPRESENTACIONAL DE %s =======================\n", login);
	fprintf(arquivo3, " %d%% Visual   %d%% Auditivo   %d%% Cinestesico   %d%% Digital\n",2*somaC,2*somaB,2*somaA,2*somaD);
	fprintf(arquivo3, "==============================================================================\n\n");
	fprintf(arquivo3, "Algumas pessoas captam melhor as mensagens do mundo exterior através da audição, são as pessoas chamadas auditivas.\n");
	fprintf(arquivo3, "Outras pessoas sentem necessidade de perguntar muito, necessitam de muitas informações e fatos. Estas são as digitais.\n");
	fprintf(arquivo3, "As cinestésicas aprendem melhor por meio das sensações táteis, como o tato, a temperatura, a umidade, as sensações internas e as emoções.\n");
	fprintf(arquivo3, "Já as pessoas visuais aprendem melhor quando se valendo da visão.\n\n");
	fprintf(arquivo3, "===============================================================================\n");
	fprintf(arquivo3, "Seu Perfil é %s\n", resultado);
	fprintf(arquivo3, "===============================================================================");
	fclose(arquivo3);
		
    }
    else if (somaC > somaA && somaC > somaB && somaC > somaD){
		printf("\nSeu perfil representacional é Visual, Consulte o Arquivo txt para mais informações\n");
		char resultado[15] = "Visual";
		char filename[200];
	
	sprintf(filename, "%s_%s_%s.txt", resultado, login, matricula);
	FILE *arquivo3 = fopen (filename,"w");
	fprintf(arquivo3, "======================= PERFIL REPRESENTACIONAL DE %s =======================\n", login);
	fprintf(arquivo3, " %d%% Visual   %d%% Auditivo   %d%% Cinestesico   %d%% Digital\n",2*somaC,2*somaB,2*somaA,2*somaD);
	fprintf(arquivo3, "==============================================================================\n\n");
	fprintf(arquivo3, "Algumas pessoas captam melhor as mensagens do mundo exterior através da audição, são as pessoas chamadas auditivas.\n");
	fprintf(arquivo3, "Outras pessoas sentem necessidade de perguntar muito, necessitam de muitas informações e fatos. Estas são as digitais.\n");
	fprintf(arquivo3, "As cinestésicas aprendem melhor por meio das sensações táteis, como o tato, a temperatura, a umidade, as sensações internas e as emoções.\n");
	fprintf(arquivo3, "Já as pessoas visuais aprendem melhor quando se valendo da visão.\n\n");
	fprintf(arquivo3, "===============================================================================\n");
	fprintf(arquivo3, "Seu Perfil é %s\n", resultado);
	fprintf(arquivo3, "===============================================================================");
	fclose(arquivo3);
    }
    else if (somaD > somaA && somaD > somaB && somaD > somaC) {
    	printf("\nSeu perfil representacional é Digital, Consulte o Arquivo txt para mais informações\n");
    	char resultado[15] = "Digital";
    	char filename[200];
	
	sprintf(filename, "%s_%s_%s.txt", resultado, login, matricula);
	FILE *arquivo3 = fopen (filename,"w");
	fprintf(arquivo3, "======================= PERFIL REPRESENTACIONAL DE %s =======================\n", login);
	fprintf(arquivo3, " %d%% Visual   %d%% Auditivo   %d%% Cinestesico   %d%% Digital\n",2*somaC,2*somaB,2*somaA,2*somaD);
	fprintf(arquivo3, "==============================================================================\n\n");
	fprintf(arquivo3, "Algumas pessoas captam melhor as mensagens do mundo exterior através da audição, são as pessoas chamadas auditivas.\n");
	fprintf(arquivo3, "Outras pessoas sentem necessidade de perguntar muito, necessitam de muitas informações e fatos. Estas são as digitais.\n");
	fprintf(arquivo3, "As cinestésicas aprendem melhor por meio das sensações táteis, como o tato, a temperatura, a umidade, as sensações internas e as emoções.\n");
	fprintf(arquivo3, "Já as pessoas visuais aprendem melhor quando se valendo da visão.\n\n");
	fprintf(arquivo3, "===============================================================================\n");
	fprintf(arquivo3, "Seu Perfil é %s\n", resultado);
	fprintf(arquivo3, "===============================================================================");
	fclose(arquivo3);
	}
	
}

void sobreteste(){ //opcao 4 mestre
	int opcoes;
	
	FILE *arquivo;	
	arquivo = fopen("REFERENCIAL_TEORICO.txt", "r");
	
	char texto[200];
	
	while(fgets(texto, 200, arquivo) != NULL){
		printf("%s", texto);
	}
	
	fclose(arquivo);
	
	system("pause");
	master();

}
