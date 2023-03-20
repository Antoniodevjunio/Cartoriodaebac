    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>
 
    int registro()
    {
	printf("Digite  o nome desejavel para registra!\n");
	system("pause");
    }
    
    int consulta()
	{
	printf("Digite o nome que deseja consulta!\n");
    system("pause");
	}
	
	int deletar()
	{  
	printf("Digite o nome que deseja excluir!\n");
	system("pause");
	}
    int main()

    {
	
	int opcao=0;
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	system("cls");
	
	setlocale(LC_ALL, "PORTUGUESE");
	printf("### cartório da ebac ###\n\n");
	printf("Escolha a opção desejavel do menu:\n\n");
	printf("\t1 - Registra nomes\n");
	printf("\t2 - Consulta nomes\n");
	printf("\t3 - Deletar os nomes\n");
	printf("\t4 - Sair do sistema\n\n");
	printf("opção:");
		
	scanf("%d", &opcao);
	
	system("cls");
	
	switch(opcao)
	{
		
	case 1:
	registro();	
 	break;
	
	case 2:
	consulta();
	break;
	
	case 3:
		deletar();	
	break;
	
	case 4:
		
	printf("Obrigado(a) por usar o sistema");
	return 0;
	break;
	
	
	default:
		printf("Escolha uma opção válida!\n");
	system("pause");
	break;
	
    } 
    }
    }





