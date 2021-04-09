
// conio.h tem que estar antes do stdlib.h e depois do stdio.h

#include <stdio.h>
#include <conio.h> 
#include <stdlib.h>


 
struct livro
{
  long num;  
  char nome[30];  
  char autor[30];   
  float valor;       
};

struct livro liv;



 int main( )
 {
  
  FILE *fp;  
 FILE *fp2;  
  char ch;
  char str[80];
  
  long salto;
    int elemi;

   fp2 = fopen("dadostemp.dat", "w");   
  
  if (fp == NULL)
  {
     printf("ERRO!\nO Ficheiro não foi aberto.\n");
     
     printf("\n\nDigite uma tecla para terminar Programa\n");
     
     fflush(stdin);
     ch = getchar();   
              
     exit(0);     
  }
  


   printf("\n\nClique em ESC para sair\n\n");  
   printf("\t ou digite 'a' para novo registo\n\n");
         printf("\t ou digite 'b' para ver todos os registos\n\n");
               printf("\t ou digite 'c' para consultar registos\n\n");
                          printf("\t ou digite 'd' para eleminar registos\n\n");
   fflush(stdin);         
  if (getch() == 'a' )
  do
  {

       fp = fopen("dados.dat", "a");
   printf("\n\nDigite o ISBN do livro: ");
   fflush(stdin);
   scanf("%ld", &liv.num);
   
   printf("\n\nDigite o Titulo do livro: ");
   fflush(stdin);
   gets(liv.nome);
      
   printf("\n\nDigite o Autor do livro: ");
   fflush(stdin);
   gets(liv.autor);   
   
   printf("\n\nDigite o valor do livro: ");
   fflush(stdin);
   scanf("%f", &liv.valor);
   

   
   fwrite(&liv, sizeof(liv), 1, fp);
       fclose(fp); 
         
main();  
  }
  while (getch() == 'a');    

if (getch() == 'b') 
      do
  {

 fp = fopen("dados.dat", "r");   
     while (fread(&liv, sizeof(liv), 1, fp))
     {
          printf("\n\n\nISBN: %ld", liv.num);
          
          printf("\nNome: %s", liv.nome);
          
          printf("\nAutor: %s", liv.autor);
          
          printf("\nValor: %4.2f", liv.valor);  
     }  
     fclose(fp); 
 
     fclose(fp); 
         
       
      main();
  }while (getch() == 'b');    
  
  if (getch() == 'c') 
      do
  {
  	 fp = fopen("dados.dat", "r");  
printf("\n\n\nDigite o numero do registo que pretenda ler: ");
    
  fflush(stdin);    
  scanf("%ld", &salto);
     


  fseek(fp, (long)(salto - 1) * sizeof(liv), SEEK_SET);
 

  fread(&liv, sizeof(liv), 1, fp);


  printf("\n\n\n\nISBN: %ld", liv.num);
  printf("\nNome: %s", liv.nome);
  printf("\nAutor: %s", liv.autor);
  printf("\nValor: %4.2f\n\n\n", liv.valor); 
       
    fclose(fp); 
       
      main();
  }while (getch() == 'c');  
   if (getch() == 'd' )
  do
  {

      
       printf("digite o valor para eliminar");
             scanf("%d",elemi);



while( fgets (str, 80, fp)  != NULL ){
	 fputs(str, fp2);
}

  while( fgets (str, 80, fp2)  != NULL ){
   	if (fgets (str, 80, fp2)==elemi){
   			printf("A record with requested name found and deleted.\n\n");
			
	   }
   	else fputs(str, fp);
   }

    
main();  
  }
  while (getch() == 'd');    
  
   if (getch() != 27) 
{
	
	 printf("\n\n\n");
  system("PAUSE");	
  
  return 0;
}

 
         

 
 }
 
 
 

