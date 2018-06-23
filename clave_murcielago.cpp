#include<iostream>
#include<string.h>

 using namespace std;
char clave[10]  = {'m','u','r','c','i','e','l','a','g','o'};
char key[10]={'0','1','2','3','4','5','6','7','8','9'};
	 
void codificar(char palabra[] ,int tam);
void decodificar(char palabra[], int tam);

int main(){

	 char palabra[100];
	 int tam;
	 
	 cout<<"digite la palabra o frase: ";
	 cin.getline(palabra,100,'\n');
	 
	
	tam = strlen(palabra);
	
	codificar(palabra,tam);
	cout<<endl;
	
	decodificar(palabra,tam);
	cout<<endl;
	
return 0;
}

void codificar(char palabra[], int tam){
	int i,j;
	for(i = 0 ; i < tam ; i++){
		 for(j = 0; j < 10; j ++){
			 if(palabra[i] == clave[j]){
				 palabra[i] = key[j];
			 }
		 }
	 }
	 
	 cout<<"Palabra codificada: "<<endl<<palabra;
	 
 }
 
 void decodificar(char palabra[], int tam){
	 
	int i,j;
	for(i = 0 ; i < tam ; i++){
		 for(j = 0; j < 10; j ++){
			 if(palabra[i] == key[j]){
				 palabra[i] = clave[j];
			 }
		 }
	 }
         cout<<"Palabra decodificada: "<<endl<<palabra;
		
 }	 
	 
	 
	
	