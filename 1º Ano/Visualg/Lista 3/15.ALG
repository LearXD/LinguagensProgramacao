Algoritmo "15"
// Disciplina   : Computa��o
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 07/03/2022
Var
saco, gato1, gato2: real


Inicio

escreval("Digite a quantidade total de ra��o em KG do saco:")
leia(saco)

escreval("Digite o valor do consumo di�rio do primeiro gato:")
leia(gato1)

escreval("Digite o valor do consumo di�rio do segundo gato:")
leia(gato2)

escreval(((gato1 * exp(10, -3)) *5))
escreval(((gato2 * exp(10, -3)) *5))

saco <- (saco -  ((gato1 * exp(10, -3)) *5)) -  ((gato2 * exp(10, -3)) *5)

escreval("O restante da rac�o � de", saco, "KG")


Fimalgoritmo