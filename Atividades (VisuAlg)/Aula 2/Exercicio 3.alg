algoritmo "Ordem Crescente"

var
N1,N2,N3: Real
inicio
Escreva("Digite o Primeiro Numero: ")
Leia(N1)
Escreva("Digite o  Segundo Numero: ")
Leia(N2)
Escreva("Digite o Terceiro Numero: ")
Leia(N3)
Se (N1 > N2) E (N2 > N3) entao
   Escreva(N3 , N2 , N1)
Senao
   Se (N3 > N2) E (N2 > N1) entao
      Escreva(N1 , N2 , N3)
   Senao
      Se (N1 > N3) E (N3 > N2) entao
         Escreva(N2 , N3 , N1)
      Senao
         Se (N2 > N1) E (N1 > N3) entao
            Escreva(N3 , N1 , N2)
         Senao
            Se (N3 > N1) E (N2 > N3) entao
               Escreva(N1 , N3 , N2)
            Senao
               Escreva(N2 , N1 , N3)
            Fimse
         Fimse
      Fimse
   Fimse
Fimse



fimalgoritmo
