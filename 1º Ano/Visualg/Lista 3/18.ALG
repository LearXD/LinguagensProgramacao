Algoritmo "18"
// Disciplina   : Computa��o
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 07/03/2022
Var
numero: real

Inicio

escreval("Digite um n�mero real:")
leia(numero)

escreval("O numero inteiro desse numero �:", int(numero))
// OU (int(numero) - numero)
escreval("A parte fracionaria do numero �: ", copia(Numpcarac(numero), compr(Numpcarac(int(numero))) + 2, compr(Numpcarac(numero))))
escreval("O n�mero arredondado �:", int(numero + 0.5))

Fimalgoritmo