algoritmo "Litros"

var
Litros: inteiro
LitrosAumento, Mililitros: real

inicio
Escreva("Digite a quantidade de litros da represa: ")
Leia(Litros)
LitrosAumento <- Litros + (Litros * 0.34)
Mililitros <- (Litros - (Litros * 0.4)) * 1000
Escreval("A Quantidade de litros ao aumento de 34% �", LitrosAumento)
Escreval("A Quantidade de mililitros ao ocorrer redu��o de 40% �", Mililitros)

fimalgoritmo

