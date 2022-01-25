#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <fstream>


using namespace std;

int main() {
	
	char clave[50000];
	vector<int> posiciones;//Vector con las posiciones de los 5 asteriscos
	cout<< "Digite su clave cifrada: ";
	cin.getline(clave,50000,'\n');//Guardo en clave el la cadena ingresada
	ofstream archivo;//Creo archivo
	archivo.open("CLAVE.OUT.txt",ios::out);//Genera el archivo .txt 
	int digitoClave = 4;//cantidad de digitos de la clave
	
	//Recorro la cadena para sacar las posiciones de los asteriscos
	for (int i = 0; i<strlen(clave); i++){
		if (clave[i] == '*'){
			posiciones.insert(posiciones.end(), i); //inserto en el vector de posicones la posicion de cada asterisco
		}
	}
	cout<<"Clave descifrada"<<endl;
	//Recorro el vector de posiciones para cacular cuantos caracteres hay entre dos asteriscos
	for (int j = 0; j<digitoClave; j++){
		int resultado = posiciones[j+1] - posiciones[j] - 1; 
		//cout<<resultado<<endl;//Escribe en consola
		archivo<<resultado<<endl;//Escribe en el archivo .txt que se genera
	}
	return 0;
}
