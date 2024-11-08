#include "manip_exchange.h"

/*---------------------------------------MAIN----------------------------------------*/

// float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100]as,

int main() {
    FILE *file;
    pessoa pessoas[10];
    float valores[100] = {100, 50, 25};
    char moedas[100][100] = {"BTC", "ETH", "XRP"};
    float taxas_compra[100] = {0.02, 0.01, 0.01};
    float taxas_venda[100] = {0.03, 0.02, 0.01};

    int usuariologado = -1;

    int verificacao = arquivoexiste("dados.bin");

    if(pessoas[0].CPF[0] == '\0'){
        strcpy(pessoas[0].CPF, "12345678909");
        strcpy(pessoas[0].senha, "123456");
        strcpy(pessoas[0].nome, "ADM");
        pessoas[0].reais = 0.00;
        for(int j = 0; j<100; j++){
            pessoas[0].moedas[j] = 0.00;
        }
        pessoas[0].usr_ou_adm = 1; // adm base
    }

    if(verificacao == 0){ // O arquivo existe
        escrever(pessoas, 10, valores, moedas, taxas_compra, taxas_venda);
    }else{
        ler(&file, pessoas, 10, valores, moedas, taxas_compra, taxas_venda);
    }
    menuinicial(pessoas, valores, moedas, taxas_compra, taxas_venda, usuariologado);
    return 0;
}