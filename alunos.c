#include <stdio.h>
#include <windows.h>
//#include "main.c"
typedef struct alunos {
    char matricula[30];
    char nome[50];
    char cpf[11];

}CAD_ALUNOS;

void cada_alunos( struct alunos);

void ope_alunos(){
    int o=0;
    CAD_ALUNOS alu;
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
                limpartelaa();
                cada_alunos(alu);break;
                Sleep(1000);
            case 2:
                limpartelaa();
               // excluir_alunos();
               break;
                Sleep(1000);
            case 3:
                limpartelaa();
               // editar_alunos();
               break;
                Sleep(1000);
            case 4:
                limpartelaa();
                //listar_alunos();
                break;
                Sleep(1000);
            case 5:
                limpartelaa();
                Sleep(1000);
               // menu_principal();
            default:
                printf("Opção invalida\n");break;
        }
    }
    while(o > 5 || o < 1);
}
void cada_alunos(struct alunos al){
    FILE *arquivo;
    arquivo = fopen("alunos.txt", "a");
    if(arquivo == NULL){
        printf("Nao foi possivel abrir arquivo!");
    }
    else{
        printf("\n---------------CADASTRO DE ALUNOS-------------\n\n");
        printf("Digite o nome do aluno: ");
        fflush(stdin);
        gets(al.nome);
        fprintf(arquivo, "NOME: %s\n", al.nome);

    }


}

