Algoritmo "3"
// Disciplina   : Computação
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 07/03/2022
Var
salario, aumento, res: real


Inicio

escreval("Digite o salario:")
leia(salario)
escreval("Digite o percentual de aumento:")
leia(aumento)

res <- salario + (salario * (aumento / 100))

escreval("O Salário com aumento é", res)

Fimalgoritmo