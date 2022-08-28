Algoritmo "SALARIO"

// Disciplina   : Introdução a Computação
// Professor   : Adriano Santos
// Descrição   : Um programa que recebe o salário de um funcionário, calcula e mostra o novo salário, sabendo-se que este sofreu um aumento de 25%.
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 31/01/2022

// s = salário
// res = resultado

Var s, res: real
Inicio

      escreval("Digite o salário...")
      leia(s)

      res <- s + ((25 * s)/100)
      
      escreval("O salario foi: ", res)
      
Fimalgoritmo