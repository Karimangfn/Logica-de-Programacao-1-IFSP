algoritmo "Quadrante"

var
Angulo: Inteiro

inicio
Escreva("Digite a Medida de um Angulo em Graus: ")
Leia(Angulo)
Se Angulo < 90 entao
   Escreva("O Angulo de" ,Angulo, " Graus Se Localiza no 1� Quadrante")
Senao
   Se (Angulo >= 90) E (Angulo < 180) entao
      Escreva("O Angulo de" ,Angulo, " Graus Se Localiza no 2� Quadrante")
   Senao
      Se (Angulo >= 180) E (Angulo < 270) entao
         Escreva("O Angulo de" ,Angulo, " Graus Se Localiza no 3� Quadrante")
      Senao
         Escreva("O Angulo de" ,Angulo, " Graus Se Localiza no 4� Quadrante")
      Fimse
   Fimse
Fimse


fimalgoritmo
