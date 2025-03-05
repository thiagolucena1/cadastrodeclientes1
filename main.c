#include <stdio.h>
#include <stdlib.h>




struct Cliente {
    char nome[100];
    char email[100];
    char cep[100];
};


int main()
{

    struct Cliente cliente[100];

    int option, numeroCliente = 0;

    do {
    printf("-------------MENU ------------- \n");
    printf ("1 - CADASTRAR \n");
    printf("2 - VERIFICAR DADOS\n");
    printf("3 - EDITAR DADOS \n");
    printf("4 - REMOVER CONTAS \n");
    printf("------------------------------- \n");
    

    scanf("%d" , &option);

   

    switch(option){
        case 1:

        printf("Digite o seu email \n");
        scanf("%s" , cliente[numeroCliente].email);

        printf("Digite o seu nome \n");
        scanf("%s" , cliente[numeroCliente].nome);

        printf("Digite o seu CEP \n");
        scanf("%s" , cliente[numeroCliente].cep);


        printf("Cliente adicionado...");

        numeroCliente++;


    
        break;
    
        case 2: 
            for(int a = 0; a < numeroCliente; a++){
                printf("%s", cliente[a].email);
                printf("%s", cliente[a].nome);
                printf("%s", cliente[a].cep);
            
            
                break;
                
            } 
            
            case 3:

            printf("Escreva o nome da pessoa que você deseja editar!");

            char newName[100] = " ";
            int i;

            for(int i = 0; i < numeroCliente; i++);{
                if (strcmp(cliente[i].nome , newName) == 0) {

                    printf("Digite o novo nome do cliente");

                    scanf("%s", cliente[i].nome);

                     
                    printf("Digite o novo email");

                    scanf("%s", cliente[i].email);

                     
                    printf("Digite o novo CEP");

                    scanf("%s", cliente[i].cep);



                    break;
                }
            }



    }
   
} while(option != 5);
return 0;


}
 

    






