#include <stdio.h>

main (){
  int CasosSusp,CasosConf,Mortes,Total;
  
  printf("Digite o Numero de Casos Suspeitos: ");
  scanf("%d", &CasosSusp);
  printf("\nDigite o Numero de Casos Confirmados: ");
  scanf("%d", &CasosConf);
  printf("\nDigite o Numero de Mortes: ");
  scanf("%d", &Mortes);
  
  Total = CasosSusp + CasosConf + Mortes;
  
  printf("\nO Numero de Casos Suspeitos Sao: %d",CasosSusp);
  printf("\nO Numero de Casos Confirmados Sao: %d",CasosConf);
  printf("\nO Numero de Mortes Sao: %d" , Mortes);
  printf("\nO Numero de Casos Totais Registrados Sao: %d",Total);
  
}
