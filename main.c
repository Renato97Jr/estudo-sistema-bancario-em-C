#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int opcao;

    printf("=================================================\n");
    printf("            BAC - Controle Bancerio              \n");
    printf("=================================================\n");
    printf(" Este Sistema permite consultar o seu saldo atual,\n");
    printf(" Realizar depositos e transferencias de forma,\n");
    printf(" rapida e segura.\n");
    printf("==================================================\n");
    printf(" Ola, e um prazer ter voce como nosso cliente.\n\n");

    do {
        printf("\n   MENU PRINCIPAL   \n");
        printf("\n1 - Consultar Saldo\n");
        printf("2 - Realizar Deposito\n");
        printf("3 - Realizar Transferencia\n");
        printf("4 - Sair\n");
        printf("Digite a opcao desejada: \n");

        scanf("%d", &opcao);
    } while (opcao !=4);
 
    return 0;
}