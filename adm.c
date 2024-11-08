#include "manip_exchange.h"
#include "adm.h"

void login_adm(pessoa pessoas[], float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100], int usuariologado){
    limpaterminal();
    char cpflogin[12];
    char senhalogin[7];

    printf("|------------------------------[Login ADM]------------------------------|"
            "\n");
    printf("Digite o CPF: ");
    scanf("%s", cpflogin);

    if (strlen(cpflogin) != 11) {
        printf("CPF inválido!\n");
        limpabuffer();
        espera();
        limpaterminal();
        menuinicial(pessoas, valores, moedas, taxas_compra, taxas_venda, usuariologado);
    }
    limpabuffer();

    for (int i = 0; i < 10; i++) {
        if (strcmp(cpflogin, pessoas[i].CPF) == 0) {
        if(pessoas[i].usr_ou_adm != 1){
            puts("Você não possui permissão!");
            limpabuffer();
            espera();
            menuinicial(pessoas, valores, moedas, taxas_compra, taxas_venda, usuariologado);
        }
        printf("Digite sua senha: ");
        scanf("%s", senhalogin);
        if (strlen(senhalogin) != 6) {
            printf("Senha inválida!\n");
            limpabuffer();
            espera();
            menuinicial(pessoas, valores, moedas, taxas_compra, taxas_venda, usuariologado);
        }
        limpabuffer();
        if (strcmp(senhalogin, pessoas[i].senha) == 0) {
            printf("Logado com sucesso\n");
            usuariologado = i;
            espera();
            menu(pessoas, valores, moedas, taxas_compra, taxas_venda, usuariologado);
            return;
        } else {
            printf("Senha incorreta\n");
            espera();
            menuinicial(pessoas, valores, moedas, taxas_compra, taxas_venda, usuariologado);
            return;
        }
        }
    }
    printf("CPF não cadastrado!\n");
    espera();
    menuinicial(pessoas, valores, moedas, taxas_compra, taxas_venda, usuariologado);
}