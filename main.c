#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <windows.h>
#include <locale.h>
#include "menu_principal.c"


main(){
    setlocale(LC_ALL, "");
    int i,j, op=0;


    printf("\n\n\n\n  :::::  VOCÊ VAI CONHECER O NOSSO SISTEMA DE GESTÃO DE BIBLIOTECAS ! ::::: \n\n\n");

    printf("Carregando Sistema...\n");
    for (i = 1; i <= 50; i++){
      printf ("  %d%%\r", i*2);

      for (j = 0; j < i; j++){
         if (!j)
           printf("  ");

         printf ("%c", 177);
         Sleep(10);
      }
   }

    printf ("\n\n\n\tInicializando sistema...\n\n");
    Sleep(1000);
    system("cls");


    do{
        menu_principal();
        scanf("%d", &op);
        switch(op){
            case 1:
                system("cls");
                printf("Cadastrar alunos\n\n");break;
            case 2:
                system("cls");
                printf("Cadastrar acervo\n\n");break;
            case 3:
                system("cls");
                printf("Emprestimos\n\n");break;
            case 4:
                system("cls");
                printf("Obrigado por usar nosso sistema!");break;
            default:
                system("cls");
                printf("\nOpção incorreta!\n");break;
        }

    }while(op != 4);

}
