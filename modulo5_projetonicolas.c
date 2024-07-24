#include <stdio.h> //biblioteca de comunicação com o usuário 
#include <stdlib.h> //biblioteca de alocção de espaço em memória 
#include <locale.h> //biblioteca de alocação de texto para região 
#include <string.h> //biblioteca responsavel por cuidar das string

     int registro() //funcão responsável por cadastrar os usuários no sistema
  {
  	//Inicio de criação de variáveis/strings
  	char arquivo [40];
  	char cpf [40];
  	char nome[40];
  	char sobrenome[40];
  	char cargo[40];
  	//Final da criação de variáveis/strings
  	
  	 printf("Digite o cpf a ser cadastrado:"); //coletando informação do usuário 
  	 scanf("%s", cpf);//%s refere-se a string
  	 
  	 strcpy(arquivo, cpf); //responsavel por copiar os valores do string
  	 
  	 FILE *file; //cria o arquivo
  	 file = fopen (arquivo, "w"); //cria o arquivo
  	 fprintf(file,cpf); // salva o valor da variavel
  	 fclose(file); //fecha o arquivo 
  	 
  	 file = fopen (arquivo, "a");
  	 fprintf(file,",");
  	 fclose(file);
  	 
  	 printf("Digite o nome a ser cadastrado:"); //coletando informação do usuário
  	 scanf("%s",nome); 

     file = fopen (arquivo, "a");
     fprintf (file,nome);
     fclose(file);
  	 
  	 file = fopen (arquivo, "a"); 
  	 fprintf(file,",");
  	 fclose(file);
  	 
  	 printf("Digite o sobrenome a ser cadastrado:"); //coletando informação do usuário
  	 scanf("%s",sobrenome);
  	 
  	 file = fopen (arquivo,"a");
  	 fprintf(file,sobrenome);
  	 fclose(file);
  	 
  	  file = fopen (arquivo, "a");
     fprintf(file,",");
     fclose(file);
     
     printf("Digite o cargo a ser cadastrado:"); //coletando informação do usuário
     scanf("%s",cargo);
     
     file = fopen(arquivo, "a");
     fprintf(file,cargo);
     fclose(file);
     
     system("pause"); 
  	 
  	 
  	 
  }
  
     int consulta()
     
  {
  	
  	setlocale(LC_ALL, "PORTUGUESE");
  	
  	char cpf [40];
  	char conteudo [100];
  	
  	printf("Digite o CPF a ser consultado:");
  	scanf("%s",cpf);
  	
  	FILE *file;
  	file = fopen(cpf, "r");
  	
  	if(file == NULL)
  	  {
  		printf("Arquivo não localizado!\n");
	  }
	  
	  while(fgets(conteudo, 100, file) != NULL)
	  
	   {
	   	
	  	printf("\nInfomações do usuário:");
	  	printf("%s", conteudo);
	  	printf("\n\n");
	  	
        }
  	 
  	  system("pause");

  }
  
     int deletar()
  {
  	char cpf [40];
  	printf("Digite o CPF do usuário a ser deletado:");
  	scanf("%s",cpf);
  	
  	remove(cpf);
  	
  	FILE *file;
  	file = fopen(cpf,"r");
  	
  	if(file == NULL)
  	
  	{
  		printf("O usuário não se encontra no sitema!\n");
  		system("pause");
	  }
  	
  }
  
     int main ()
    
 {
 
 
 
	
 	
 	 int opcao=0; //definindo variaveis
 	 int laco=1;
 	 
 	 for(laco=1;laco=1;)
 	  {
	   
	   
	  
	  system("cls");
	  
	  
 	 setlocale(LC_ALL, "PORTUGUESE");
 	 printf("###cartório da EBAC###\n\n");
 	 printf("\t Escolha a opção desejada do menu:\n\n");
 	 printf("\t1 - Registrar nomes:\n\n");
 	 printf("\t2 - consultar nomes:\n\n");
 	 printf("\t3 - Deletar nomes:\n\n");
 	 printf("\t4 - encerrar programa\n\n");
 	 printf("escolha a opção:");
 	          

		                
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
 	   	printf("Encerrado! Obrigado por utilizar o programa");
		return 0;
		break;
				
 	   	
 	     default:
 	    printf("Opção não disponivel\n");
 	   	system("pause");
 	   	break;
 	   
	} //fim da seleção
      
    }
     
 
}
      
   






	 
	 

