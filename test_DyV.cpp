#include "DyV.h"
#include <bits/stdc++.h>
using namespace std;

int main(){
	cout << "Elige la función a realizar: Busqueda binaria (1) o QuickSort (2)" << endl;
	int opc;
	cin >> opc;
	if(opc == 2){

	int tam;
	cout << "Introduce el tamaño del vector a ordenar: ";
	cin >> tam;
	vector<int> vec(tam);

	cout << "Ahora introduce los valores a ordenar: ";
	for(int i = 0; i < tam; i++){
		cin >> vec[i];
	}
	qs(vec, 0, tam-1);
	
	cout << "El vector ordenado es: ";
	for(int i = 0; i < tam; i++){
		cout << vec[i] << " ";
	}
	cout << endl;
	
	}else{

	
	int valor;
	int tam;
	cout << "Introduce el tamaño del vector: ";
	cin >> tam;
	vector<int> vec(tam);
	for(int i=0; i<tam; i++){
		cin >> vec[i];
	}
	
	sort(vec.begin(),vec.end());
	cout << "El vector ordenado es: ";
	for(int i=0; i<tam; i++){
		cout << vec[i] << " ";
	}
	cout << endl;
	
	cout << "Introduce el valor a buscar: ";
	cin >> valor;
 
	int pos = Busqueda(valor,vec,0,tam-1);
	if(pos = -1){
		cout << "El valor introducido no se encuentra en el vector \n";
	}else{
		cout << "El valor a buscar se encuentra en la posición: " << pos + 1 << endl;
	}
	}

	return 0;
}
