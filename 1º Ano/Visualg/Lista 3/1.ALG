Algoritmo "1"
// Disciplina   : Computação
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 07/03/2022
Var
notaA, notaB, notaC, pesoA, pesoB, pesoC, media: real


Inicio

escreval("Digite a nota 1:")
leia(notaA)

escreval("Digite o peso da nota 1:")
leia(pesoA)

escreval("Digite a nota 2:")
leia(notaB)

escreval("Digite o peso da nota 2:")
leia(pesoB)

escreval("Digite a nota 3:")
leia(notaC)

escreval("Digite o peso da nota 3:")
leia(pesoC)


media <- (notaA * pesoA + notaB * pesoB + notaC * pesoC) / (pesoA + pesoB + pesoC)

escreval("A Média ponderada é", media)

Fimalgoritmo