Algoritmo "mediaponderada"

Var
Nota1, Nota2, Peso1, Peso2, MediaPonderada: Real

Inicio
Escreva("Digite sua Primeira Nota: ")
Leia(Nota1)
Escreva("Digite sua Segunda Nota: ")
Leia(Nota2)
Escreva("Digite o Primeiro Peso: ")
Leia(Peso1)
Escreva("Digite o Segundo Peso: ")
Leia(Peso2)
MediaPonderada <- (Nota1 * Peso1 + Nota2 * Peso2) / (Peso1 + Peso2)
Escreva("Sua Media Ponderada é ",MediaPonderada:2:1)

Fimalgoritmo
