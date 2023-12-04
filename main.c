/******************************************************************************
Responsavel pelo Codigo:Jhonathan Ryan Martins
Turma: EC41A-C11
Trabalho Final Algoritmos 1 
*******************************************************************************/


#include <stdio.h>
#include <string.h>
#include <math.h>

#define MIN_DIA 1               //Todas as defines foram utilizadas para delimitar o numero maximo que o usuario pode digitar
#define MAX_DIA 31
#define MIN_MES 1
#define MAX_MES 12
#define MIN_ANO 2023
#define MAX_ANO 2050

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome_do_cliente[50];
    char telefone_do_cliente[15];
} Cliente;

typedef struct {
    char nome_do_animal[50];
    char especie; 
    Data data_nascimento;
    char agressivo; 
} Animal;

typedef struct {
    int identificador;
    Data data_servico;
    Cliente cliente; 
    Animal pet;
    int tipo_de_servico;
    char pago;
} Servico;

void verificarAgressividade(char agressivo);
void verificarPagamento(char pago);

int main() {
    Servico meuServico;
    int numero;
    int raçacachorro,
        raçagato,
        raçapassaro;
    meuServico.identificador = 1;
    meuServico.pago = 'N'; 
int cadastro;
char animal_cadastrado;
printf("***************************************\n");
    printf("* Bem-vindo(a) ao Sistema Veterinário *\n");
    printf("***************************************\n\n");
    
    printf("O Senhor(a) ja tem algum animal cadrastado?\n");
    printf("Digite (1) para sim e (2) para não\n");
    scanf("%d", &cadastro);
    switch (cadastro){
        case 1:
        printf("Otimo!!!Prossiga\n");
        break;
        case 2:
        printf("Prossiga para o Sistema de cadastro:\n");
        printf("Qual o seu nome?\n");
        scanf("%s", meuServico.cliente.nome_do_cliente);
        do{
        printf("Qual seu número de telefone:\n");
        scanf("%14s", meuServico.cliente.telefone_do_cliente);
        if(strlen(meuServico.cliente.telefone_do_cliente) != 12){
            printf("Por favor, informe um número valido (DDD + 9 adicional + 8 digitos).\n");
        }
        }while(strlen(meuServico.cliente.telefone_do_cliente) != 12);
        printf("Senhor(a): %s, poderia informar o nome do animal?\n", meuServico.cliente.nome_do_cliente);
        scanf("%s", meuServico.pet.nome_do_animal);
        
        printf("Digite o número que corresponde à espécie do seu animal:\n");
        printf("1. Cachorro\n2. Gato\n3. Pássaro\n4. Outro\n");
        scanf("%d", &numero);
        if(numero = 0){
            printf("Espécie selecionada: Cachorro\n");
                printf("Digite a raça do %s :\n", meuServico.pet.nome_do_animal);
                scanf("%d", &raçacachorro);
        }
        if( numero = 1){
            printf("Espécie selecionada: Gato\n"); 
            printf("Digite a raça do %s :\n", meuServico.pet.nome_do_animal);
            scanf("%d", &raçagato);
        }
        if (numero = 2){
            printf("Espécie selecionada: Pássaro\n");
            printf("Digite a raça do %s :\n", meuServico.pet.nome_do_animal);
            scanf("%d", &raçapassaro);
        }
        if (numero = 3){
            printf("Espécie selecionada: Pássaro\n");
            printf("Digite a raça do %s :\n", meuServico.pet.nome_do_animal);
            scanf("%d", &raçapassaro);
        }
        if (numero = 4 ){
            printf("Espécie selecionada: Outro\n");
        }
        
        
        
        printf("Animal cadastrado!!!");
        break;
    } 
    printf("Qual o dia desejado para a consulta?\n");
    scanf("%d", &meuServico.data_servico.dia);
    while (meuServico.data_servico.dia < MIN_DIA || meuServico.data_servico.dia > MAX_DIA) {
        printf("Dia inválido. O dia deve estar entre 1 e 31.\n");
        printf("Qual o dia desejado para a consulta?\n");
        scanf("%d", &meuServico.data_servico.dia);
    

    printf("Qual o mês desejado para a consulta?\n");
    scanf("%d", &meuServico.data_servico.mes);
    
    if (meuServico.data_servico.mes < MIN_MES || meuServico.data_servico.mes > MAX_MES) {
        printf("Mês inválido. O mês deve estar entre 1 e 12.\n");
    while (meuServico.data_servico.mes < MIN_MES || meuServico.data_servico.mes > MAX_MES) {
        
        printf("Qual o mês desejado para a consulta?\n");
        scanf("%d", &meuServico.data_servico.mes);
        }
        return 1;
    }

    printf("Qual o ano desejado para a consulta?\n");
    scanf("%d", &meuServico.data_servico.ano);

    if (meuServico.data_servico.ano < MIN_ANO || meuServico.data_servico.ano > MAX_ANO) {
        printf("Ano inválido. O ano deve estar entre 2000 e 2023.\n");
    while (meuServico.data_servico.ano < MIN_ANO || meuServico.data_servico.ano > MAX_ANO) {
        printf("Qual o ano desejado para a consulta?\n");
        scanf("%d", &meuServico.data_servico.ano);
    }
        return 1;
    }

    printf("A data desejada para a consulta é: %02d/%02d/%04d\n\n\n", meuServico.data_servico.dia, meuServico.data_servico.mes, meuServico.data_servico.ano);

    printf("Qual o seu nome?\n");
    scanf("%49s", meuServico.cliente.nome_do_cliente);
    
  do{
        printf("Qual seu número de telefone:\n");
        scanf("%14s", meuServico.cliente.telefone_do_cliente);
        if(strlen(meuServico.cliente.telefone_do_cliente) != 12){
            printf("Por favor, informe um número valido (DDD + 9 adicional + 8 digitos).\n");
        }
    }while(strlen(meuServico.cliente.telefone_do_cliente) != 12);
    
    printf("Senhor(a): %s, poderia informar o nome do animal?\n", meuServico.cliente.nome_do_cliente);
    scanf("%s", meuServico.pet.nome_do_animal);

   
    
    printf("Por favor, informe a data de nascimento do animal (dia mês ano):\n");
    scanf("%d %d %d", &meuServico.pet.data_nascimento.dia, &meuServico.pet.data_nascimento.mes, &meuServico.pet.data_nascimento.ano);

    printf("O seu animal é agressivo?\n");
    printf("Digite (S) para sim e (N) para não\n ");
    scanf(" %c", &meuServico.pet.agressivo);
    verificarAgressividade(meuServico.pet.agressivo);

    printf("Qual o tipo de serviço desejado:\n");
    printf("1. Banho\n2. Tosa\n3. Consulta Veterinaria\n4. Hospedagem\n");
    
    int tipo_de_servico;
    scanf("%d", &tipo_de_servico);
    meuServico.tipo_de_servico = tipo_de_servico;

    switch (tipo_de_servico) {
        case 1:
            printf("Você escolheu Banho.\n");
            break;
        case 2:
            printf("Você escolheu Tosa.\n");
            break;
        case 3:
            printf("Você escolheu Consulta Veterinaria.\n");
            break;
        case 4:
            printf("Você escolheu Hospedagem.\n");
            break;
        default:
            printf("Opção inválida\n");
            return 1;  
    }

    printf("O serviço foi pago? Digite (S) para sim e (N) para não\n");
    scanf(" %c", &meuServico.pago);
    verificarPagamento(meuServico.pago);

    return 0;
}

void verificarAgressividade(char agressivo) {
    if (agressivo == 'S' || agressivo == 's') {
        printf("Seu animal é agressivo.\n");
    } else if (agressivo == 'N' || agressivo == 'n') {
        printf("Seu animal não é agressivo.\n");
    } else {
        printf("Opção inválida.\n");
    }
}
    return 1;
void verificarPagamento(char pago) {
    if (pago == 'S' || pago == 's') {
        printf("O serviço foi pago.\n");
    } else if (pago == 'N' || pago == 'n') {
        printf("O serviço ainda não foi pago.\n");
    } else {
        printf("Opção inválida.\n");
    }
    printf("Obrigado pela preferencia");
}
}

