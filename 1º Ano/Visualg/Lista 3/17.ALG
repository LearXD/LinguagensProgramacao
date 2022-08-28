Algoritmo "17"
// Disciplina   : Computação
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 07/03/2022
Var
salario, kW: real


Inicio

escreval("Digite o seu salário minimo:")
leia(salario)

escreval("Digite o valor de quilowatts consumidos:")
leia(kW)

escreval("Um quilowatt vale:", salario / 5)
escreval("O valor a ser pago pela residência é de:", (kW * (salario / 5)), "R$")
escreval("O valor a ser pago com um desconto de 15% é de:", (kW * (salario / 5)) - ((kW * (salario / 5)) * (15/100)), "R$")

Fimalgoritmo