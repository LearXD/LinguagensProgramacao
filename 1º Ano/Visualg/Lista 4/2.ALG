Algoritmo "2"
// Disciplina   : Introdu��o a Computa��o
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 21/03/2022
Var
   price: real
   class: caractere

Inicio
   escreval("Digite o pre�o:")
   leia (price)

   SE (price > 0) ENTAO
      SE price <= 50 ENTAO
         price <- price + (price*5/100)
      SENAO
         SE price <= 100 ENTAO
            price <- price + (price*10/100)
         SENAO
            price <- price + (price*15/100)
         FIMSE
      FIMSE
   FIMSE

   escreval ("O pre�o com o aumento ser�: ", price, " R$")

   SE price <= 80 ENTAO
      class <- "Barato"
   SENAO
      SE price <= 120 ENTAO
         class <- "Normal"
      SENAO
         SE price <= 200 ENTAO
            class <- "Caro"
         SENAO
            class <- "Muito Caro"
         FIMSE

      FIMSE
   FIMSE

   escreval("O Pre�o do produto � considerado ", class,"!")
Fimalgoritmo