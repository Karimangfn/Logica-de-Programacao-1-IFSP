algoritmo "Notas"

var
N1,N2,Media: Real

inicio
Escreva("Digite a Primeira Nota: ")
Leia(N1)
Escreva("Digite a Segunda  Nota: ")
Leia(N2)
Media <- (N1 + N2)/2
Se Media >= 7.0 entao
   Escreval("Sua Média é: ", Media)
   Escreva("Situação: Aprovado")
Senao
   Se (Media < 7) E (Media >= 4) entao
      Escreval("Sua Média é: ", Media)
      Escreva("Situação: Recuperação, Estará de Exame")
   Senao
      Escreval("Sua Média é: ", Media)
      Escreva("Situação: Reprovado")
   Fimse
Fimse



fimalgoritmo
