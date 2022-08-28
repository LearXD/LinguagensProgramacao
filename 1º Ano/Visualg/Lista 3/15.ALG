Algoritmo "15"
// Disciplina   : Computação
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 07/03/2022
Var
saco, gato1, gato2: real


Inicio

escreval("Digite a quantidade total de ração em KG do saco:")
leia(saco)

escreval("Digite o valor do consumo diário do primeiro gato:")
leia(gato1)

escreval("Digite o valor do consumo diário do segundo gato:")
leia(gato2)

escreval(((gato1 * exp(10, -3)) *5))
escreval(((gato2 * exp(10, -3)) *5))

saco <- (saco -  ((gato1 * exp(10, -3)) *5)) -  ((gato2 * exp(10, -3)) *5)

escreval("O restante da racão é de", saco, "KG")


Fimalgoritmo