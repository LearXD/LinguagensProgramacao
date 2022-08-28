Algoritmo "5"
// Disciplina   : Computação
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 07/03/2022
Var
salario, res: real

Inicio

escreval("Digite o salario:")
leia(salario)

res <- salario + 50
res <- res - (salario * (10/ 100))

escreval("O Salário final é", res)

Fimalgoritmo