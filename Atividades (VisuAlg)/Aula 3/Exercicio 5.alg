algoritmo "RedeSocial"

var
Social,Instagram,Twitter,Facebook,Whatsapp,Outros,Alunos,Resposta:inteiro

inicio
Repita
Escreval("Digite o Numero Correspondente a rede social: ")
Escreval("[1]Instagram")
Escreval("[2]Twitter")
Escreval("[3]Facebook")
Escreval("[4]WhatsApp")
Escreval("[5]Outras")
Escreval("[0]Sair")
Leia(Social)
ESCOLHA Social
         CASO 1
            Escreva("Digite quantos alunos escolheram Instagram: ")
            Leia(Instagram)
            limpatela()
         CASO 2
            Escreva("Digite quantos alunos escolheram Twitter: ")
            Leia(Twitter)
            limpatela()
         CASO 3
            Escreva("Digite quantos alunos escolheram Facebook: ")
            Leia(Facebook)
            limpatela()
         CASO 4
            Escreva("Digite quantos alunos escolheram WhatsApp: ")
            Leia(WhatsApp)
            limpatela()
         CASO 5
            Escreva("Digite quantos alunos escolheram Outros: ")
            Leia(Outros)
            limpatela()
fimescolha
ate(Social = 0)
Alunos <- Instagram + Twitter + Facebook + WhatsApp + Outros

      
limpatela()
Escreval("Rede      N de Alunos   %")
Escreval("..............................")
Escreval("Instagram", Instagram," Alunos   ",((Instagram * 100)/Alunos):2:2,"%")
Escreval("Twitter  ", Twitter,  " Alunos   ",((Twitter * 100)/Alunos):2:2,"%")
Escreval("Facebook ", Facebook, " Alunos   ",((Facebook * 100)/Alunos):2:2,"%")
Escreval("WhatsApp ", Whatsapp, " Alunos   ",((Whatsapp * 100)/Alunos):2:2,"%")
Escreval("Outras   ", Outros,   " Alunos   ",((Outros * 100)/Alunos):2:2,"%")
Escreval("..............................")
Escreval("Totais   ", Alunos,   " Alunos    100%")
fimalgoritmo
