Algoritmo "7"
// Disciplina   : Introdu��o a Computa��o
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 21/03/2022
Var
   count: real
   code: inteiro

   unitary: real
   discount: real
   total: real
Inicio

   escreval("Digite o c�digo do produto:")
   leia(code)

   escreval("Digite a quantidade do produto:")
   leia(count)

   total <- 0

   SE ((code > 0) e (code <= 10)) ENTAO
      unitary <- 10
      total <- (unitary * count)
   SENAO
      SE ((code > 0) e (code <= 20)) ENTAO
         unitary <- 15
         total <- (unitary * count)
      SENAO
         SE ((code > 0) e (code <= 30)) ENTAO
            unitary <- 20
            total <- (unitary * count)
         SENAO
            SE ((code > 0) e (code <= 40)) ENTAO
               unitary <- 30
               total <- (unitary * count)
            FIMSE
         FIMSE
      FIMSE
   FIMSE
   escreval("O pre�o unit�rio do produto foi de", unitary, "R$")
   escreval("O pre�o total da nota foi de", total, "R$")

   //EU PODERIA TER BOTADO 1 IF VERIFICANDO SE � MAIOR QUE 0, MAS S� PERCEBI ISSO DEPOIS '-'
   SE ((total > 0) e (total <= 250)) ENTAO
      discount <- 5
      total <- (total - (total * 5/100))
   SENAO
      SE ((total > 0) e (total <= 500)) ENTAO
         discount <- 10
         total <- (total - (total * 10/100))
      SENAO
         SE (total > 0) ENTAO
            discount <- 15
            total <- (total - (total * 15/100))
         FIMSE
      FIMSE
   FIMSE

   escreval("Foi aplicado um disconto de", discount, "% reduzindo", (((total*100)/(100-discount)) - total), "R$")
   escreval("O pre�o final da nota j� com os descontos � de", total,"R$")


Fimalgoritmo