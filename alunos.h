#include <stdio.h>
#include <windows.h>
#include <dos.h>
int mat = 100;
//Estrutura para o cadastro de alunos
typedef struct alunos {
    int matricula;
    char nome[50];
    char cpf[11];
}CAD_ALUNOS;
void cad_alunos(struct alunos al){
    int cont=0;
    printf("\n---------------CADASTRO DE ALUNOS-------------\n\n");
    //Criando um arquivo, com um ponteiro do tipo FILE
    FILE *arquivo;
    //Abrindo o arquivo criado e dando o nome cad_alunos para o arquivo
    //O "a+" é  para abrir salvar no final, e ler os dados do arquivo
    arquivo = fopen("cad_alunos.txt", "a+b");
    //verificando se o arquivo foi aberto com exito
    if(arquivo == NULL){
        printf("Impossivel Abrir Aquivo!");
    }
    else{

        printf("%d\n", cont);
        printf("Sua matricula: %d\n", mat);
        fprintf(arquivo, " Matricula: %d ", mat); //escrevendo a matricula no arquivo
        printf("Digite o Nome do Aluno: ");
        fflush(stdin);
        gets(al.nome);
        fprintf(arquivo, " Nome: %s ", al.nome); //escrevendo o nome no arquivo
        printf("Digite o CPF do Aluno: ");
        fflush(stdin);
        gets(al.cpf);
        fprintf(arquivo, " CPF: %s ", al.cpf); //escrevendo o nome no arquivo
        fprintf(arquivo, "--------------------------------------------");
        limpartela();
        printf("ALUNO CADASTRADO COM SUCESSO!");
    }
    fclose(arquivo);
}
//Função para verificar que opção vai ser usada no menu aluno
void op_alunos () {
    int o=0;
    struct alunos al;
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
                cad_alunos(al);
                Sleep(1000);
            case 2:
                limpartela();
                break;
                Sleep(1000);
            case 3:
                limpartela();
                break;
                Sleep(1000);
            case 4:
                limpartela();
               break;
                Sleep(1000);
            case 5:
                limpartela();
                Sleep(1000);
                menu_principal();
            default:
                printf("Opção invalida\n");break;
        }
        fflush(stdin);
    }
    while(o >= 5);
}

