Algoritmo "14"
// Disciplina   : Computa��o
// Professor   : Adriano Lages dos Santos
// Autor(a)    : Miguel Silva Pinheiro
// Data atual  : 07/03/2022
Var
saldo, pag1, pag2: real


Inicio

escreval("Digite o saldo da conta:")
leia(saldo)

escreval("Digite o valor do primeiro pagamento")
leia(pag1)

escreval("Digite o valor do segundo pagamento")
leia(pag2)

// N�O TENHO CERTEZA SE � ASSIM, MAS ACREDITO QUE FA�A SENTIDO
//     EFETUO O PAGAMENTO | REDUZO OS 0.38% DO PAGAMENTO EFETUADO
saldo <- (saldo - pag1) - ((saldo - pag1) * (0.38 / 100))
saldo <- (saldo - pag2) - ((saldo - pag2) * (0.38 / 100))

escreval("O saldo ap�s os pagamentos � de", saldo, "R$")


Fimalgoritmo