#ifndef adm
#define adm

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>//para usar o toupper nas escolhas
#include <math.h>
#include "manip_exchange.h"


typedef struct {
    char CPF[12];
    char senha[7];  
    char nome[100];
    float reais;
    float moedas[100];
    char ext[100][100];
    int usr_ou_adm;
} pessoa;

void login_adm(pessoa pessoas[], float valores[100], char moedas[100][100], float taxas_compra[100], float taxas_venda[100], int usuariologado);

#endif
