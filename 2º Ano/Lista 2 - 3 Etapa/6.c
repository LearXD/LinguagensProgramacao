#include <stdio.h>

typedef struct {
    int id;
    char owner[30];
    int balance;
} Account;

int getHigherBalance (Account accounts[], int size) {
    int id = accounts[0].id;
    int balance = accounts[0].balance;
    for (int i = 0; i < size; i++) {
        if(accounts[i].balance > balance) {
            balance = accounts[i].balance;
            id = accounts[i].id;
        }
    }
    return id;
}

void main () {
    int size;

    printf("Digite a quantidade de contas para registrar: \n");
    scanf("%d", &size);

    Account accounts[size];

    for (int i = 0; i < size; i++) {
        printf("Digite as informacoes da conta %d:\n", i + 1);
        printf("Digite o numero da conta:\n");
        scanf("%d", &accounts[i].id);
        fflush(stdin);
        printf("Digite o nome do dono da conta:\n");
        fgets(accounts[i].owner, sizeof(accounts[i].owner), stdin);
        printf("Digite o saldo da conta:\n");
        scanf("%d", &accounts[i].balance);
    }

    printf("O numero da conta com maior saldo e: %d...", getHigherBalance(accounts, size));
}
