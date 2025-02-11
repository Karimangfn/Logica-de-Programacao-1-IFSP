algoritmo "Viagem"

var
TempoGasto, VelocidadeMedia, DistanciaP: Inteiro
Litros: Real

inicio
Escreva("Digite o Tempo Gasto em sua Viagem(em Horas): ")
Leia(TempoGasto)
Escreva("Digite sua velocidade media durante a viagem(em Km/h): ")
Leia(VelocidadeMedia)
DistanciaP <- TempoGasto * VelocidadeMedia
Litros <- DistanciaP / 12
Escreval("Sua Velocidade Média durante a viagem foi de: ", VelocidadeMedia, " Km/h")
Escreval("Seu Tempo Gasto na Viagem foi:", TempoGasto, " Horas")
Escreval("A Distancia Percorrida na Viagem foi de:", DistanciaP, "Km")
Escreval("A Quantidade de litros utilizados na viagem foi de: ", Litros:2:2)
fimalgoritmo
