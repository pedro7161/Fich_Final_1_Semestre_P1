#include <stdio.h>
#include <stdlib.h>
#define FILE_NAME "text.txt"
//Grupo I
//Desenvolva um programa que aplique as técnicas de programação inerentes aos
//Ficheiros de Texto da Linguagem C para a obtenção de um determinado conjunto de
//cálculos estatísticos a partir de um ficheiro de texto livre, criado por si, sob a forma de
//ocorrências/quantidades, conforme abaixo descrito:
//1. De cada vogal (frequência discriminada das ocorrências de cada vogal).
//2. Das consoantes (totalidade das consoantes)
//3. Das palavras (totalidade das palavras)

int main(int argc, char *argv[]) {
	int a;
int e=0;
int i=0;
int o=0;
int u=0;
 int k=0;
 int espaco=0;
int char_count = 0, word_count = 1, vog_count = 0;

  int in_word = 0;
char ch;
        FILE * fptr;
     
        char str[] = "palavra teste ok\n";
        fptr = fopen("fputc_test.txt", "w"); 
        for (k = 0; str[k] != '\n'; k++) {

            fputc(str[k], fptr);
        }
        fclose(fptr);
        
         fptr = fopen("fputc_test.txt", "r");
         
      while ((ch = fgetc(fptr)) != EOF) {
    char_count++;

    if(ch == ' ' || ch == '\t' || ch == '\0' || ch == '\n') {
      if (in_word) {
        in_word = 0;
        word_count++;
      }

   

    } 
	   if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
	    if (ch =='a')a++;
	     if (ch =='e')e++;
	      if (ch =='i')i++;
	       if (ch =='o')o++;
	        if (ch =='u')u++;
	   
	   vog_count++;
	   }
	   if (ch == ' ')espaco++;
	   
	else {
		
      in_word = 1;
    }
  }


  printf("Number of characters: %d.\n", char_count);
  printf("Number of words: %d.\n", word_count);
  printf("Number of vogals: %d.\n", vog_count);
    printf("Number of vogals a: %d.\n", a);
      printf("Number of vogals e: %d.\n", e);
        printf("Number of vogals i: %d.\n", i);
          printf("Number of vogals o: %d.\n", o);
            printf("Number of vogals u: %d.\n", u);
  printf("Number of vconsoantes: %d.\n", char_count-vog_count-espaco);
        return 0;
}
