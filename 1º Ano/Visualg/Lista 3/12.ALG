Algoritmo "12"
// Disciplina   : Computa��o
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 07/03/2022
Var
fabrica, lucro, impostos, res: real


Inicio

escreval("Digite o pre�o de f�brica do ve�culo:")
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

escreval("O pre�o final do ve�culo foi de", res, "R$")


Fimalgoritmo