#include <stdio.h>


main (){
	int i;
	int i2;
	float media = 0;
	float menor = 0;
	float maior = 0;
	float oferta[10][10];
	char carro[30][20];
	
	for (i=0;i<=9;i++){
		printf("Carro N%d:",i+1);
		gets(carro[i]);
		for (i2=0;i2<=3;i2++){
			printf("Oferta N%d desse carro: ",i2+1);
			scanf("%f", &oferta[i][i2]);
			media = media + oferta[i][i2];
		
				
        } 
		printf("\n");
		fflush(stdin);
		system("cls");
		
		oferta[i][i2] = media; media = 0;
		
		
		}	
	
	for(i=0;i<=9;i++){
		for(i2=0;i2<=3;i2++){
		if (i == 0 && i2 == 0){
               menor=oferta[0][0];
               maior=oferta[0][0];
        }
               
		if (oferta[i][i2] < menor){
			menor = oferta[i][i2];
			
	    }
		if (oferta[i][i2] > maior){
			maior = oferta[i][i2];
		}	
		
	}
    }
	
	for (i=0;i<=9;i++){
		printf("\nCarro N%d: %s \n",i+1,carro[i]);
		for(i2=0;i2<=3;i2++){
			printf("Oferta N%d desse carro: %4.2f \n",i2+1,oferta[i][i2]);
		}
		printf("media %4.2f \n", oferta[i][i2]/4);
		
					
	}
	printf("Maior oferta entre todas: %4.2f \n", maior);
	printf("menor oferta entre todas:  %4.2f \n", menor);

}
