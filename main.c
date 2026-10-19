#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int opcao;
    float saldo = 0.0;
    float valor;

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

    switch (opcao){
        case 1:
            printf("\n Conulta de saldo\n");
            printf("Seu saldo atual: R$ %.2f", saldo);
            break;

        case 2:
            printf("\n Realizar Deposito\n");
            printf("Digite o valor para depoisto: R$ \n");
            scanf("%f", &valor);

            if (valor > 0){
                saldo += valor;
                printf("Deposito realizado com sucesso! novo saldo: R$ %.2f/n", saldo);
            } else {
                printf("[ERRO] O valor do deposito deve ser maior que zero!\n");
            }
            break;

        case 3:
            printf("\nRealizar Transferencia\n");
            printf("Digite o valor da transferencia: R$ ");
            scanf("%f", &valor);

            if (valor <= 0){
                printf("[ERRO] O valor da transferencia deve ser maior que zero!");
            } else if (valor > saldo){
                printf("[ERRO] Saldo insuficiente! Seu saldo atual e R$ %.2f\n", saldo);
            
            } else {
                saldo -= valor;
                printf("Transferencia realizada com sucesso! Novo saldo R$ %.2f\n", saldo);
            }
            break;

        case 4:
            printf("\nObrigado por utilizar o BAC!\n");
            break;
        default:
            printf("\n[ERRO] Opcao invalida! por favor, escolha uma opcao de 1 a 4.\n");
            break;

        }
    } while (opcao !=4);
 
    return 0;
}