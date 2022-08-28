Algoritmo "MEDIA ARITIMETICA"

// Disciplina   : Introdução a Computação
// Professor   : Adriano Santos
// Descrição   : Um programa que recebe três notas, calcula e mostra a média aritmética.
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 31/01/2022

Var n1, n2, n3, res: real

Inicio

      escreval("Digite a primeira nota...")
      leia(n1)
      escreval("Digite a segunda nota...")
      leia(n2)
      escreval("Digite a terceira nota...")
      leia(n3)
      
      res <- (n1 + n2 + n3)/3
      
      escreval("A média foi de: ", res, " pontos...")

Fimalgoritmo