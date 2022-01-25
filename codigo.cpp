#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <fstream>

using namespace std;

int main() {
	
	char clave[50000];
	int digitoClave = 4;//cantidad de digitos de la clave
	int asteriscos = 0; //cantidad de asteriscos
	
	vector<int> posiciones;//Vector con las posiciones de los 5 asteriscos
	
	cout<< "Digite su clave cifrada: ";//Mensaje en consola
	cin.getline(clave,50000,'\n');//Guardo en clave la cadena de caracteres ingresada
	
	
	
	//Cuento la cantidad de asteriscos de la cadena
	for (int i = 0; i<strlen(clave); i++){
		if (clave[i] == '*'){
			asteriscos = asteriscos +1;
			
		}
	}
	//cout<<asteriscos<<endl;
	
	//Validacion por si se escribe mal la cadena, es decir que tenga mas o menos de 5 asteriscos
	if (asteriscos == 5){
		
		ofstream archivo;//Creo archivo
		archivo.open("CLAVE.OUT.txt",ios::out);//Genera el archivo .txt (puse que sea txt para poder leerlo rapido) 
		
		//Recorro la cadena para sacar las posiciones de los asteriscos
		for (int i = 0; i<strlen(clave); i++){
			if (clave[i] == '*'){
				posiciones.insert(posiciones.end(), i); //inserto en el vector de posicones la posicion de cada asterisco
				
			}
		}
		
		//Recorro el vector de posiciones para cacular cuantos caracteres hay entre dos asteriscos
		for (int j = 0; j<digitoClave; j++){
			int resultado = posiciones[j+1] - posiciones[j] - 1;
			
			//Validacion de que la clave tiene 4 numeros de un digito es decir no puede haber una clave que sea 1-2-3-10
			if(resultado <=9){
				//cout<<resultado<<endl;//Escribe en consola
				archivo<<resultado<<endl;//Escribe en el archivo .txt que se genera
			}else{
				archivo<<resultado<<" Numero no valido"<<endl;//Escribe en el archivo .txt que se genera el numero que esta mal
				//exit(-1);//finaliza ejecucion
			}
		}
		cout<<"Clave descifrada"<<endl;//Mensaje en consola	
	}else{
		cout<<"Cadena mal escrita";//Mensaje en consola
	}
	return 0;
}
