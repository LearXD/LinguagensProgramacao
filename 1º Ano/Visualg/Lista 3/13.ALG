Algoritmo "13"
// Disciplina   : Computa��o
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 07/03/2022
Var
horas, salario, res: real


Inicio

escreval("Digite as horas trabalhadas:")
leia(horas)

escreval("Digite o salario m�nimo:")
leia(salario)

res <- horas * (salario / 2)
res <- res - (res * (3 / 100))

escreval("O sal�rio bruto final foi de", res, "R$")


Fimalgoritmo