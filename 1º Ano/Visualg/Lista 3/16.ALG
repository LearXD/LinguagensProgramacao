Algoritmo "16"
// Disciplina   : Computa��o
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 07/03/2022
Var
degrau, altura: real


Inicio

// RESOLVI COLOCAR EM CM PQ NAO FAZ SENTIDO SER EM METROS KKKKK
escreval("Digite o tamanho de cada degrau (em cent�metros):")
leia(degrau)

// RESOLVI COLOCAR EM METROS PRA SER MAIS PR�TICO
escreval("Digite a altura desejada (em metros):")
leia(altura)

escreval("Voc� precisa subir", (altura/(degrau * exp(10, -2))), " degrais")

Fimalgoritmo