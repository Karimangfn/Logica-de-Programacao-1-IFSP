algoritmo "Media"
var
alunos, contador, N, Media: real
inicio
contador <- 1
Media <- 0
Escreva("Digite a quantidade de alunos da sala:" )
Leia(alunos)
enquanto (contador <= alunos) faca
   Escreva("Digite N",contador,": ")
   Leia(N)
   Media <- (Media + N)
   contador <- contador + 1
Fimenquanto
Escreval("A Media dos Alunos é", Media/Alunos)
fimalgoritmo
