Algoritmo "SALARIO"

// Disciplina   : Introdu��o a Computa��o
// Professor   : Adriano Santos
// Descri��o   : Um programa que recebe o sal�rio de um funcion�rio, calcula e mostra o novo sal�rio, sabendo-se que este sofreu um aumento de 25%.
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 31/01/2022

// s = sal�rio
// res = resultado

Var s, res: real
Inicio

      escreval("Digite o sal�rio...")
      leia(s)

      res <- s + ((25 * s)/100)
      
      escreval("O salario foi: ", res)
      
Fimalgoritmo