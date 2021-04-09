
#include <stdio.h>
#include <conio.h> 
#include <stdlib.h>
 #define MAX 256

 


 int main( )
 {
  
  FILE *fp;  
FILE*fp2;  
FILE*fp3; 
  int i=0;
  char nome[30];  
char filename[MAX];
        char str[MAX], temp[] = "temp.txt", *ptr, *tmp;
  char word[MAX] ="ana";
 

   
  
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
  
  		fp= fopen("fich1.txt", "r");
		fp2= fopen("fich2.txt", "w");


   while( fgets (str, 80, fp)  != NULL )
    {
    
    fputs(str, fp2);  
    }
		fclose(fp);
		fclose(fp2);
		
		fp2= fopen("fich2.txt", "r");
		fp3 = fopen(temp, "w");
		
            while (!feof(fp2)) {
                strcpy(str, "\0");
        
                fgets(str, MAX, fp2);

          
                if (strstr(str, word)) {
                        tmp = str;
                        while (ptr = strstr(tmp, word)) {
                        
                                while (tmp != ptr) {
                                        fputc(*tmp, fp3);
                                        tmp++;
                                }
                 
                                ptr = ptr + strlen(word);
                                tmp = ptr;
                        }

                   
                        while (*tmp != '\0') {
                                fputc(*tmp, fp3);
                                tmp++;
                        }
                } else {
     
                        fputs(str, fp3);
                }
        }
            fclose(fp2);
        fclose(fp3);
        
        
         		fp2= fopen("fich2.txt", "w");
			fp3 = fopen(temp, "r");


   while( fgets (str, 80, fp3)  != NULL )
    {
    
     fputs(str, fp2);  
    }
		fclose(fp2);
		fclose(fp3);

	 printf("\n\n\n");
  system("PAUSE");	
  
  return 0;


 
         

 
 }
 
 
 

