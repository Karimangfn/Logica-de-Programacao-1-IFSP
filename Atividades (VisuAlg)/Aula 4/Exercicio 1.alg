Algoritmo "Matriz"

Var
A: vetor [0..4, 0..4] de inteiro
B: vetor [0..4, 0..4] de inteiro
i,i2: inteiro


Inicio
para i de 0 ate 2 passo 1 faca
     para i2 de 0 ate 2 passo 1 faca
     Escreva("Digite um numero da Matriz A: ")
     Leia(A[i,i2])
     fimpara
fimpara

limpatela()

para i de 0 ate 2 passo 1 faca
     para i2 de 0 ate 2 passo 1 faca
     Escreva("Digite um numero da Matriz B: ")
     Leia(B[i,i2])
     fimpara
fimpara

limpatela()

para i de 0 ate 2 passo 1 faca
     para i2 de 0 ate 2 passo 1 faca
     Escreval("Matriz A:",A[i,i2])
     fimpara
fimpara

Escreval("")

para i de 0 ate 2 passo 1 faca
     para i2 de 0 ate 2 passo 1 faca
     Escreval("Matriz B:",B[i,i2])
     fimpara
fimpara

Escreval("")

se (A[i] = B[i2]) e (A[i2] = B[i]) entao
   Escreval("Estas Matrizes sao iguais")
senao
   Escreval("Estas Matrizes sao diferentes")
fimse







Fimalgoritmo
