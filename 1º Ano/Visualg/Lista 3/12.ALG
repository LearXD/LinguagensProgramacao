Algoritmo "12"
// Disciplina   : Computação
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 07/03/2022
Var
fabrica, lucro, impostos, res: real


Inicio

escreval("Digite o preço de fábrica do veículo:")
leia(fabrica)

escreval("Digite o percentual de lucro do distribuidor:")
leia(lucro)

escreval("Digite o percentual de impostos aplicados:")
leia(impostos)

lucro <- fabrica * (lucro / 100)
escreval("O lucro do distribuidor foi de", lucro, "R$")

impostos <- fabrica * (impostos / 100)
escreval("O valor dos impostos foi de", impostos, "R$")

res <- fabrica + lucro + impostos

escreval("O preço final do veículo foi de", res, "R$")


Fimalgoritmo