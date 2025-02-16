Algoritmo "rendimento"

Var
Deposito,Juros,ValorRendimento,ValorTotal: Real

Inicio
Escreva("Digite o Valor do Deposito: ")
Leia(Deposito)
Escreva("Digite o Valor dos Juros: ")
Leia(Juros)
ValorRendimento <-  (Juros * Deposito) / 100
ValorTotal <- ValorRendimento + Deposito
Escreval("O Seu Valor de Rendimento �:", ValorRendimento)
Escreva("O Seu Valor Total é:", ValorTotal)

Fimalgoritmo
