Algoritmo "Impar"
Var
N,Denominador, Cont: inteiro
S,X: real

Inicio
S<-0
Denominador<- 1
 Escreva("Informe o número de termos(Impar): ")
 Leia(N)
 Escreva("Digite o valor de x: ")
 Leia(X)
 Enquanto (Cont<=N) faca
   se (Cont mod 2 = 0)  entao
   S <- S - (X/Denominador)
   senao
   S <- S + (X/Denominador)
   fimse
   Cont <- Cont + 1
   Denominador <- Denominador + 2
Fimenquanto
 Escreval("O valor de S é: ",S)
Fimalgoritmo
