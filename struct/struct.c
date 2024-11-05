#include <stdio.h>

struct aluno_ia24
{

    char nome[20];
    char genero[20];
    int idade;
    char email[50];
    int matricula;
};

int main(void){

    struct aluno_ia24 novo;

    printf("\nDiga o nome do(a) aluno: ");
    fgets(novo.nome, sizeof(novo.nome), stdin);

    printf("\nDiga o genero do(a) %s: ", novo.nome);
    fgets(novo.genero, sizeof(novo.genero), stdin);

    printf("\nDigite o email do(a) %s: ", novo.nome);
    fgets(novo.email, sizeof(novo.email), stdin);

    printf("\nDigite a idade do(a) %s: ", novo.nome);
    scanf("%d", &novo.idade);

    printf("\nDigite a matricula do(a) %s: \n", novo.nome);
    scanf("%d", &novo.matricula);

    printf("\nO(a) aluno(a) %s eh %s, seu email eh %s, sua matricula eh %d e ele(a) tem %d anos de idade\n", novo.nome, novo.genero, novo.email, novo.matricula, novo.idade);
}