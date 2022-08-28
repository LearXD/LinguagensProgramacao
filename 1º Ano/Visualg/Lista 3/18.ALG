Algoritmo "18"
// Disciplina   : Computação
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 07/03/2022
Var
numero: real

Inicio

escreval("Digite um número real:")
leia(numero)

escreval("O numero inteiro desse numero é:", int(numero))
// OU (int(numero) - numero)
escreval("A parte fracionaria do numero é: ", copia(Numpcarac(numero), compr(Numpcarac(int(numero))) + 2, compr(Numpcarac(numero))))
escreval("O número arredondado é:", int(numero + 0.5))

Fimalgoritmo