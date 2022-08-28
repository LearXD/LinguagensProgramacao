Algoritmo "2"
// Disciplina   : Introdução a Computação
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 21/03/2022
Var
   price: real
   class: caractere

Inicio
   escreval("Digite o preço:")
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

   escreval ("O preço com o aumento será: ", price, " R$")

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

   escreval("O Preço do produto é considerado ", class,"!")
Fimalgoritmo