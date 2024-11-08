#ifndef manip_exchange
#define manip_exchange

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>//para usar o toupper nas escolhas
#include <math.h>

typedef struct {
    char CPF[12];
    char senha[7];  
    char nome[100];
    float reais;
    float moedas[100];
    char ext[100][100];
    int usr_ou_adm;
} pessoa;

/*---------------------------------------PROTÓTIPOS MENUS---------------------------------------*/

void menu(pessoa pessoas[], float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100], int usuariologado);
void menuinicial(pessoa pessoas[], float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100], int usuariologado);

/*---------------------------------PROTÓTIPOS FUNÇÕES PRINCIPAIS---------------------------------*/

void login(pessoa pessoas[], float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100], int usuariologado);
void cadastrar(pessoa pessoas[], float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100], int usuariologado);
void consultarsaldo(pessoa pessoas[], float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100], int usuariologado);
void consultarextrato(pessoa pessoas[], int usuariologado);
void depositar(pessoa pessoas[], float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100], int usuariologado);
void sacar(pessoa pessoas[], float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100], int usuariologado);
void comprar(pessoa pessoas[], float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100], int usuariologado);
void vender(pessoa pessoas[], float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100], int usuariologado);
void atualizar(pessoa pessoas[],float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100], int usuariologado);

/*---------------------------------PROTÓTIPOS FUNÇÕES AUXILIARES---------------------------------*/

void limpaterminal();
void espera();
void limpabuffer();
int verificaCPF(char *cpf);
void printarcpf(char *cpf);
void criaextrato(pessoa pessoas[], int usuariologado, char sinal, float valor, char moeda[6], float taxa);
void verificacao(pessoa pessoas[], int usuariologado);
void recibocompra(float compra, float taxa);
void recibovenda(float conversao, float taxa);
void ler(FILE *file, pessoa pessoas[], int quantidade,  float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100]); 
void escrever(pessoa pessoas[], int quantidade, float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100]); 
int arquivoexiste(const char *filename);

// --------------------------------------  ADM  -------------------------------------------------

/*---------------------------------PROTÓTIPOS FUNÇÕES PRINCIPAIS---------------------------------*/

void login_adm(pessoa pessoas[], float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100], int usuariologado);
void cadastrar_investidor_adm(pessoa pessoas[], float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100], int usuariologado);
void excluir_investidor_adm(pessoa pessoas[], float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100], int usuariologado);

/*---------------------------------------PROTÓTIPOS MENUS---------------------------------------*/

void menu_adm(pessoa pessoas[], float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100], int usuariologado);

#endif
