Algoritmo "17"
// Disciplina   : Computa��o
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 07/03/2022
Var
salario, kW: real


Inicio

escreval("Digite o seu sal�rio minimo:")
leia(salario)

escreval("Digite o valor de quilowatts consumidos:")
leia(kW)

escreval("Um quilowatt vale:", salario / 5)
escreval("O valor a ser pago pela resid�ncia � de:", (kW * (salario / 5)), "R$")
escreval("O valor a ser pago com um desconto de 15% � de:", (kW * (salario / 5)) - ((kW * (salario / 5)) * (15/100)), "R$")

Fimalgoritmo