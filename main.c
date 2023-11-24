#include <stdio.h>
#include <string.h>
#include <math.h>

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
    int agressivo; 
} Animal;

typedef struct {
    int identificador;
    Data data_servico;
    Cliente cliente; 
    Animal pet;
    int tipo_de_servico;
    char pago;
} Servico;

int main() {
    Servico meuServico;
    meuServico.identificador = 1;

    printf("Qual o dia desejado para a consulta?\n");
    scanf("%d", &meuServico.data_servico.dia);

    printf("Qual o mes desejado para a consulta?\n");
    scanf("%d", &meuServico.data_servico.mes);

    printf("Qual o ano desejado para a consulta?\n");
    scanf("%d", &meuServico.data_servico.ano);
    printf("A data desejada para a consulta é: %02d/%02d/%04d\n\n\n", meuServico.data_servico.dia, meuServico.data_servico.mes, meuServico.data_servico.ano);

    printf("Qual o seu nome completo?\n");
    scanf("%s", meuServico.cliente.nome_do_cliente);
    
    printf("Qual seu numero de telefone:\n");
    scanf("%s", meuServico.cliente.telefone_do_cliente);
    
    printf("Senhor(a): %s, poderia informar o nome do Animal?", meuServico.cliente.nome_do_cliente);
    scanf("%s", meuServico.pet.nome_do_animal);
    return 0;
}
