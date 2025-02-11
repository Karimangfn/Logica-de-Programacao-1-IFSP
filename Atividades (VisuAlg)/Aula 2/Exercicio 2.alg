algoritmo "Reajuste"

var
Salario, SalarioFinal: Real

inicio
Escreva("Digite seu Salario: ")
Leia(Salario)
Se Salario < 500.00 entao
   SalarioFinal <- Salario + (Salario * 0.15)
Senao
   Se (Salario >= 500.00) E (Salario <= 1000.00) entao
      SalarioFinal <- Salario + (Salario * 0.1)
   Senao
      SalarioFinal <- Salario + (Salario * 0.05)
   Fimse
Fimse
Escreva("Seu Salario Com Reajuste será de: ", SalarioFinal:2:2, " Reais")

fimalgoritmo
