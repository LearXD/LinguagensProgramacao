Algoritmo "1"
// Disciplina   : Introdu��o a Computa��o
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 21/03/2022
Var
   salario: real
Inicio
   escreval("Digite o sal�rio")
   leia (salario)

   SE ((salario > 0) e (salario <= 350) ) ENTAO
      salario <- salario + 100
      salario <- salario - (salario * 7/100)
   SENAO
      SE ((salario > 0) e (salario < 600)) ENTAO
         salario <- salario + 75
         salario <- salario - (salario * 7/100)
      SENAO
         SE ((salario > 0) e (salario <= 900)) ENTAO
            salario <- salario + 50
            salario <- salario - (salario * 7/100)
         SENAO
            SE (salario > 0) ENTAO // > 900
               salario <- salario + 35
               salario <- salario - (salario * 7/100)
            FIMSE
         FIMSE

      FIMSE
   FIMSE

   escreval ("O sal�rio final � de:", salario, " R$")
Fimalgoritmo