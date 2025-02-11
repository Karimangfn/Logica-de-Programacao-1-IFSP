algoritmo "Fibonacci"
var
Contador, N1, N2, N3, N: Inteiro

inicio
Escreva("Escolha a quantidade de termos da sequência de Fibonacci: ")
Leia(N)
      Contador <- 0
      N1 <- 1
      N2 <- 0
      enquanto (Contador < N) faca
           N3 <- N1 + N2
           N1 <- N2
           N2 <- N3
           Escreva(N3)
           contador <- contador + 1
      fimenquanto
fimalgoritmo
