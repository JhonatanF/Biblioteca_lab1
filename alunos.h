#include <stdio.h>
typedef struct alunos {
    char matricula[30];
    char nome[50];
    char cpf[11];

}CAD_ALUNOS;

void cad_alunos();
void excluir_alunos();
void editar_alunos();
void listar_alunos();

void op_alunos () {
    int o=0;
    do{
                printf("\n---------------ALUNOS-------------\n\n");
                printf("-\t 1 Cadastrar Aluno\t\t\t-\n");
                printf("-\t 2 Remover Aluno\t\t\t-\n");
                printf("-\t 3 Editar Aluno\t\t\t-\n");
                printf("-\t 4 Listar Alunos Cadastrados\t\t\t-\n");
                printf("-\t 5 Ir para menu anterior\t\t\t-\n\n");
                scanf("%d", &o);
        switch(o){
            case 1:
                limpartela();
                cad_alunos();break;
                Sleep(1000);
            case 2:
                limpartela();
                excluir_alunos();break;
                Sleep(1000);
            case 3:
                limpartela();
                editar_alunos();break;
                Sleep(1000);
            case 4:
                limpartela();
                listar_alunos();break;
                Sleep(1000);
            case 5:
                limpartela();
                Sleep(1000);
                menu_principal();
            default:
                printf("Opção invalida\n");break;
        }
    }
    while(o > 5 || o < 1);
}
void cad_alunos() {

    printf("\n---------------CADASTRO DE ALUNOS-------------\n\n");

    FILE *arquivo;
    arquivo = fopen("cad_alunos.txt", "")


}
