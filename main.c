struct Cliente {
    char nome[100];
    char email[100];
    char cep[100];
};


int main()
{

    struct Cliente cliente[100];

    int option, numeroCliente = 0;

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

        numeroCliente++;



        case 2:

        printf("Escreva o seu nome");

    }

    





    return 0;
}
