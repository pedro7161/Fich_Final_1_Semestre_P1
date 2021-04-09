#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Pessoa {
 private:
  float peso,altura; 
     public:

void setinfo(float p,float a){ 

  peso = p;
   altura = a;

}
float getimc(){ 

return peso/(altura*altura);
}



void print(){ 

 cout << "Peso: " << peso << endl;
 cout << "Altura: " << altura << endl;
  }

};

int main(){
 Pessoa p; 
  float peso,altura;


     cout<< "Digite a altura: ";
     cin >> altura;
     cout << "Digite o peso: ";
     cin >> peso;
      p.setinfo(peso,altura); 
    cout << "IMC:"<<p.getimc()<<"\n";
       p.print(); 
       if(p.getimc()<16 and p.getimc()>0){
	   cout << "Magreza grave: Insuficiência cardíaca, anemia grave,enfraquecimento do sistema imunológico.";
	   }
	     if(p.getimc()>=16 and p.getimc()<17 ){
	   cout << "Magreza moderada: Infertilidade, queda de cabelo, falta da menstruação.";
	   }
	     if(p.getimc()>=17 and p.getimc()<18,5){
	   cout << "Magreza leve: Stress, ansiedade, fadiga";
	   }
	      if(p.getimc()>=18,5 and p.getimc()<25){
	   cout << "Saudável: Menor risco para doenças.";
	   }
	      if(p.getimc()>=25 and p.getimc()<30){
	   cout << "Sobrepeso: Fadiga, varizes, má circulação.";
	   }
	      if(p.getimc()>=30 and p.getimc()<35){
	   cout << "Obesidade Grau I: Diabetes, infarto, angina,aterosclerose.";
	   }
	        if(p.getimc()>=35 and p.getimc()<40){
	   cout << "Obesidade Grau II: Apneia do sono, falta de ar.";
	   }
	   	      if(p.getimc()>40){
	   cout << "Obesidade Grau III: Refluxo, infarto, AVC, dificuldade de locomoção, escaras.";
	   }
} 
