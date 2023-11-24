#include <stdio.h>
#include <string.h>
#include <math.h>

int numero;
int limitador1,
limitador2,
limitador3;

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

int main() {
    Servico meuServico;
    meuServico.identificador = 1;
    

    printf("Qual o dia desejado para a consulta?\n");
    scanf("%d", &meuServico.data_servico.dia);
    for(int i=0;i>=31;i++){
     if (meuServico.data_servico.dia < 1 || meuServico.data_servico.dia > 31) {
         
        printf("Dia inválido. O dia deve estar entre 1 e 31.\n");
     }
        return 1; 
    }
    printf("Qual o mes desejado para a consulta?\n");
    scanf("%d", &meuServico.data_servico.mes);
if (meuServico.data_servico.mes < 1 || meuServico.data_servico.mes > 12) {
    
        printf("Mês inválido. O mês deve estar entre 1 e 12.\n");
    
        return 1;
}
    printf("Qual o ano desejado para a consulta?\n");
    scanf("%d", &meuServico.data_servico.ano);
    printf("A data desejada para a consulta é: %02d/%02d/%04d\n\n\n", meuServico.data_servico.dia, meuServico.data_servico.mes, meuServico.data_servico.ano);
if (meuServico.data_servico.ano < 2000 || meuServico.data_servico.ano > 2023) {
        printf("Ano inválido. O ano deve estar entre 2000 e 2023.\n");
        return 1;
}
    printf("Qual o seu nome completo?\n");
    scanf("%49s", meuServico.cliente.nome_do_cliente);
    
    printf("Qual seu numero de telefone:\n");
    scanf("%14s", meuServico.cliente.telefone_do_cliente);
    
    printf("Senhor(a): %s, poderia informar o nome do Animal?\n", meuServico.cliente.nome_do_cliente);
    scanf("%s", meuServico.pet.nome_do_animal);
    for (;;) {
        printf("Digite o número que corresponde à espécie do seu animal:\n");
        printf("1. Cachorro\n2. Gato\n3. Pássaro\n4. Outro\n");
        scanf("%d", &numero);

        switch (numero) {
            case 1:
                printf("Espécie selecionada: Cachorro\n");
                meuServico.pet.especie = 'C';
                break;
            case 2:
                printf("Espécie selecionada: Gato\n");
                meuServico.pet.especie = 'G';
                break;
            case 3:
                printf("Espécie selecionada: Pássaro\n");
                meuServico.pet.especie = 'P';
                break;
            case 4:
                printf("Espécie selecionada: Outro\n");
                meuServico.pet.especie = 'O';
                break;
            default:
                printf("Opção inválida\n");
                continue;  
        }

        break;  
    }

    printf("Por favor, informe a data de nascimento do animal (dia mês ano):\n");
    scanf("%d %d %d", &meuServico.pet.data_nascimento.dia, &meuServico.pet.data_nascimento.mes, &meuServico.pet.data_nascimento.ano);
    
    printf("O seu animal é agressivo?\n");
    printf("Digite (S) para sim e (N) para não\n ");
    scanf(" %c", &meuServico.pet.agressivo);  

    
            return 0;
}        

   
