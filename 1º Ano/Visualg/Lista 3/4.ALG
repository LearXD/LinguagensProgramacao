Algoritmo "4"
// Disciplina   : Computa��o
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 07/03/2022
Var
salario, aumento, res: real


Inicio

escreval("Digite o salario:")
leia(salario)

res <- salario + (salario * (5 / 100))
res <- res - (salario * (9/ 100))

escreval("O Sal�rio final �", res)

Fimalgoritmo