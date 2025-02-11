Algoritmo "Potencia"
Var
N, A: inteiro
Contador, potencia: real

Inicio
Contador <-0
 Escreva("Informe um número: ")
 Leia(N)
 Escreva("Informe o expoente: ")
 Leia(A)
 Enquanto (Contador <= A) faca
   potencia <- N^Contador
   Escreval(N,"^",Contador, " = ",potencia)
   Contador <- Contador + 1
 Fimenquanto
Fimalgoritmo
