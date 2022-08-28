Algoritmo "22"
// Disciplina   : Computação
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 07/03/2022
Var
nasc, atual, idade: inteiro

Inicio

escreval("Digite o ano do seu nascimento:")
leia(nasc)

escreval("Digite o ano atual:")
leia(atual)

idade <- (atual - nasc)

escreval("Você tem", idade, " anos")
escreval("Você tem", idade * 12, " meses")
escreval("Você tem", idade * 365, " dias")
escreval("Você tem", idade * 52, " semanas")


Fimalgoritmo