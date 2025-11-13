#include "DyV.h"
#include "qs.h"
#include <bits/stdc++.h>
#include <chrono>
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
	vector<int> vec2(tam);

	cout << "Ahora introduce los valores a ordenar: ";
	for(int i = 0; i < tam; i++){
		cin >> vec[i];
	}
	vec2 = vec;
	auto start = std::chrono::system_clock::now();
	qsFin(vec, 0, tam-1);
	auto end = std::chrono::system_clock::now();

	std::chrono::duration<double> elapsed_seconds = end-start;
	std::cout << "Tiempo transcurrido con último elemento como pivote: " << elapsed_seconds.count() << "s\n";

	start = std::chrono::system_clock::now();
	qsMedio(vec2, 0, tam-1);
	end = std::chrono::system_clock::now();

	elapsed_seconds = end-start;
	std::cout << "Tiempo transcurrido con elemento del medio como pivote: " << elapsed_seconds.count() << "s\n";

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

	cout << "Quiere el vector ordenado de forma ascendente (1) o descendente (2)? ";
	int orden;
	cin >> orden;
	cout << "El vector ordenado es: ";
	if(orden == 2){
		reverse(vec.begin(),vec.end());
	}else if(orden != 1){
		cout << "por favor, introduzca un valor válido\n";
		return 0;
	}
	for(int i=0; i<tam; i++){
		cout << vec[i] << " ";
	}
	cout << endl;
	

	cout << "Introduce el valor a buscar: ";
	cin >> valor;
	int pos;
	if(orden == 1){
		pos = Busqueda(valor,vec,0,tam-1);
	}else{
		pos = BusquedaInv(valor,vec,0,tam-1);
	}
	if(pos == -1){
		cout << "El valor introducido no se encuentra en el vector \n";
	}else{
		cout << "El valor a buscar se encuentra en la posición: " << pos + 1 << endl;
	}
	}

	return 0;
}
