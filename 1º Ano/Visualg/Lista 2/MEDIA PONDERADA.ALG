Algoritmo "MEDIA PONDERADA"

// Disciplina   : Introdução a Computação
// Professor   : Adriano Santos
// Descrição   : Um programa que recebe três notas e seus respectivos pesos, calcula e mostra a média ponderada.
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 31/01/2022

// n = notas
// p = pesos
// t = total
// res = resultado

Var n1, n2, n3, p1, p2, p3, t1, t2, t3, res: real
Inicio

      escreval("Digite a quantidade de pessoas na nota 1...")
      leia(n1)
      escreval("Digite o peso da nota 1...")
      leia(p1)
      escreval("Digite a quantidade de pessoas na nota 2...")
      leia(n2)
      escreval("Digite o peso da nota 2...")
      leia(p2)
      escreval("Digite a quantidade de pessoas na nota 3...")
      leia(n3)
      escreval("Digite o peso da nota 3...")
      leia(p3)
      
      t1 <- n1 * p1
      t2 <- n2 * p2
      t3 <- n3 * p3
      
      res <- (t1 + t2 + t3)/(n1 + n2 + n3)
      
      escreval("A media ponderada foi de ", res, " pontos...")
      

Fimalgoritmo