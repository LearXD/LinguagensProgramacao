Algoritmo "6"
// Disciplina   : Introdução a Computação
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 21/03/2022
Var
   price: real
   code: inteiro

   region: caractere
Inicio

   escreval("Digite o preço do produto:")
   leia(price) // inutil, so botei por causa do enunciado

   escreval("Digite o código do produto:")
   leia(code)

   SE (code = 1) ENTAO
      region <- "Sul"
   SENAO
      SE (code = 2) ENTAO
         region <- "Norte"
      SENAO
         SE (code = 3) ENTAO
            region <- "Leste"
         SENAO
            SE (code = 4) ENTAO
               region <- "Oeste"
            SENAO
               SE (code <= 6) ENTAO
                  region <- "Nordeste"
               SENAO
                  SE (code <= 9) ENTAO
                     region <- "Suldeste"
                  SENAO
                     SE (code <= 20) ENTAO
                        region <- "Centro-Oeste"
                     SENAO
                        SE (code <= 30) ENTAO
                           region <- "Nordeste"
                        SENAO
                           region <- "Indefinida"
                        FIMSE
                     FIMSE
                  FIMSE
               FIMSE
            FIMSE
         FIMSE
      FIMSE
   FIMSE

   escreval("O produto é de procedência: ", region, "!")


Fimalgoritmo