Algoritmo "4"
// Disciplina   : Introdução a Computação
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 21/03/2022
Var
   height: real
   sex: caractere
Inicio

   escreval("Digite a sua altura: (metros,centímetros)")
   leia(height)

   escreval("Digite o seu sexo:")
   escreval("masculino ou feminino")
   leia(sex)

   SE (Minusc(sex) = "masculino") ENTAO
      escreval("O seu peso ideal é de ", ((72.7 * height) - 58), "KG")
   SENAO
      SE (Minusc(sex) = "feminino") ENTAO
         escreval("O seu peso ideal é de ", ((62.1 * height) - 44.7), "KG")
      SENAO
         escreval("O sexo ", sex, " não está definido!")
         Fimalgoritmo
      FIMSE
   FIMSE

Fimalgoritmo