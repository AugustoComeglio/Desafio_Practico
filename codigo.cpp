#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <fstream>


using namespace std;

int main() {
	
	char clave[50000];
	vector<int> posiciones;
	cout<< "Digite su clave cifrada: ";
	cin.getline(clave,50000,'\n');
	ofstream archivo;
	archivo.open("CLAVE.OUT.txt",ios::out);//abrir el archivo
	int digitoClave = 4;
	
	for (int i = 0; i<strlen(clave); i++){
		if (clave[i] == '*'){
			posiciones.insert(posiciones.end(), i);
		}
	}
	cout<<"Clave descifrada"<<endl;
	for (int j = 0; j<digitoClave; j++){
		int resultado = posiciones[j+1] - posiciones[j] - 1;
		//cout<<resultado<<endl;
		archivo<<resultado<<endl;
	}
	return 0;
}
