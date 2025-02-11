algoritmo "Desafio"

var
N1,N2,N3,MMC,contador: inteiro


inicio
Escreva("Digite o Primeiro Numero: ")
Leia(N1)
Escreva("Digite o Segundo Numero : ")
Leia(N2)
Escreva("Digite o Terceiro Numero: ")
Leia(N3)
contador <- 2
MMC <- 1
enquanto (N1+N2<>2) ou (N2+N3<>2) ou (N3+N1<>2) faca
   se (N1 mod contador = 0) ou (N2 mod contador = 0) ou (N3 mod contador = 0) entao
      MMC <- MMC * contador
      se(N1%contador=0) entao
         N1 <- N1 div contador
      fimse
      se(N2%contador=0) entao
         N2 <- N2 div contador
      fimse
      se(N3%contador=0) entao
         N3 <- N3 div contador
      fimse
   senao
        contador <- contador + 1
   fimse
fimenquanto
 Escreva("MMC =",MMC)
fimalgoritmo
