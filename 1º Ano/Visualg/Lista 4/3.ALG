Algoritmo "3"
// Disciplina   : Introdução a Computação
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 21/03/2022
Var
   cash: real
   type: inteiro

Inicio
   escreval("Defina o tipo de rendimeto:")
   escreval("Use: 0 [ Para PoupanÃ§a]")
   escreval("Use: 1 [ Para Fundos de Renda Fixa ]")
   leia (type)
   
   
   SE type = 0 ENTAO
      cash <- cash + (cash*3/100)
      SENAO
      SE type = 1
      cash <- cash + (cash*4/100)
      SENAO
      escreval("Defina um valor listado acima para o tipo da poupanÃ§a!")
      Fimalgoritmo
      FIMSE
   FIMSE
   
   escreval("O valor investido final serÃ¡ de: ", cash, " R$")

Fimalgoritmo