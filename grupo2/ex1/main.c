
#include <stdio.h>
#include <conio.h> 
#include <stdlib.h>


 


 int main( )
 {
  
  FILE *fp;  
int i=0;
  char nome[30];  

  
 

   
  
		fp= fopen("fich1.txt", "w");
   printf("\n\nClique em ESC para sair\n\n");  
   printf("\t ou digite nome");

      
  if (getch() != 27) 

  do
  {

   printf("\n\n");
   fflush(stdin);
      gets(nome);
   
 	fclose(fp);	
 	if (fp != NULL)
	{
		fp= fopen("fich1.txt", "a");   
		for (i=0; nome[i]; i++)
		{
			fputc(nome[i], fp);
			
		}
			fputc('\n', fp);
		printf("\n\nTexto escrito no fich fich1.txt\n\n");
	
		fclose(fp);
	}
	else
	{
		printf("\n\nTexto NAO foi escrito no file\n\n");
	}

nome[30]="";
  }
  while (getch() != 27) ;    

  

	
	 printf("\n\n\n");
  system("PAUSE");	
  
  return 0;


 
         

 
 }
 
 
 

