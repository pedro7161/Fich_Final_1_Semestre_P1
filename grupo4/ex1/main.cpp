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
    cout << p.getimc();
       p.print(); 
} 
