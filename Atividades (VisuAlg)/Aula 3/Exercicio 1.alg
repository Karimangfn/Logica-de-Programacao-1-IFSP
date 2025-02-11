Algoritmo "Soma"
Var
N: inteiro
S,Numerador,Denominador: real

Inicio
S<-0
Numerador<-1
Denominador<- 3
 Escreva("Informe o número de termos: ")
 Leia(N)
 Enquanto (Numerador<=N) faca
   S <- S + (Numerador/Denominador)
   Numerador <- Numerador + 1
   Denominador <- Denominador + 2
 Fimenquanto
 Escreval("O valor de S é: ",S)
Fimalgoritmo
