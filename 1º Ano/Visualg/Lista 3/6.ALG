Algoritmo "6"
// Disciplina   : Computação
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 07/03/2022
Var
salario, juros, res: real


Inicio

escreval("Digite o salario:")
leia(salario)
escreval("Digite o juros:")
leia(juros)

res <- salario + (salario * (juros/ 100))

escreval("O Rendimento foi de", (salario * (juros/ 100)), " reais")
escreval("O Salário final é", res)

Fimalgoritmo