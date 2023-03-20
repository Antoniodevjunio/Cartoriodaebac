    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>
    #include <string.h>
    int registro()
    {
    	
       char arquivo[40];
       char cpf[40];
       char nome[40];
       char sobrenome[40];
       char cargo[40];
       
       printf("Digite o cpf a ser cadastrado:");
       scanf("%s", cpf);
       
       strcpy(arquivo, cpf);
       
       FILE *file;
       file = fopen(arquivo, "w");
       fprintf(file,cpf);
       fclose(file);
       
       file = fopen(arquivo, "a");
       fprintf(file,",");
       fclose(file);
       
      printf("DIgite o nome a ser cadastrado:");
      scanf("%s",nome);
      
      file = fopen(arquivo, "a");
      fprintf(file,",");
	  fclose(file);
	  
	  printf("Digite o sobrenome a ser cadastrado:");
	  scanf("%s",sobrenome);
	  
	  file = fopen(arquivo, "a");
	  fprintf(file,sobrenome);
	  fclose(file);
	  
	  printf("Digite o cargo a ser cadastrado:");
	  scanf("%s", cargo);
	  
	  file = fopen(arquivo, "a");
	  fprintf(file,cargo);
	  fclose(file);
	  
	  system("pause");
	}
    
    
    int consulta()
	{
	   char cpf[40];
	   char conteudo[200];
	   
	   printf("Digite o cpf a ser consultado:");
	   scanf("%s",cpf);	
	   
	   FILE *file;
	   file = fopen(cpf,"r");
	   
	   if(file == NULL)
	   {
	   	  printf("Não foi possivel abrir o arquivo, não localizado!. \n");
	   }
	   
	    while(fgets(conteudo, 200, file) != NULL)
	    {
	    	printf("\nEssas são as informação do usuário");
	    	printf("%s", conteudo);
	    	printf("\n");
	    	
		}
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
	
	default:
		printf("Escolha uma opção válida!\n");
	system("pause");
	break;
	
    } 
    }
    }





