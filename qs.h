#include <bits/stdc++.h>
using namespace std;


int PartFin(vector<int>& vec, int ini, int fin){
	int x = vec[fin]; // pivote
	int i = ini;
	// recorrer desde ini hasta fin-1 
	for(int j = ini; j < fin; j++){
		if(vec[j] <= x){ // si el elemento es menor o igual que el pivote lo ponemos al principio
			int aux = vec[i];
			vec[i] = vec[j];
			vec[j] = aux;
			i += 1;
		}
	}
	int aux = vec[i];
	vec[i] = vec[fin];
	vec[fin] = aux;
	return i;
}

int qsMedio(vector<int>& vec, int ini, int fin){
	if(ini > fin){ // fuera del rango
		return ini; 
	}
	int mid = ini + (fin - ini) / 2;
	int x = vec[mid];
	swap(vec[mid], vec[fin]); // cambiamos el pivote con el ultimo elemento
	int i = ini;
	for(int j = ini; j < fin; ++j){ // recorremos el array desde ini hasta fin-1
		if(vec[j] <= x){ // si el elemento es menor o igual que el pivote lo ponemos al principio
			swap(vec[i], vec[j]);
			++i;
		}
	}
	swap(vec[i], vec[fin]);
	return i;
}

void qsFin(vector<int>& vec, int ini, int fin){
	if(ini<fin){
		int pivot = PartFin(vec, ini, fin);
		qsFin(vec, ini, pivot -1);
		qsFin(vec,pivot +1, fin);
	}
}


