#include <bits/stdc++.h>
#include <vector>

using namespace std;

int BusquedaInv(int x, vector<int>& vec, int ini, int fin){
	if(ini < fin){
		return -1;
	}
	
	int medio = (ini + fin)/2;
	if(vec[medio] == x){
		return medio;
	}else if(vec[medio] > x){
		return BusquedaInv(x, vec, medio+1, fin);
	}else if(vec[medio] < x){
		return BusquedaInv(x, vec, ini, medio-1);
	}
	return -1;

}




int Busqueda(int x, vector<int>& vec, int ini, int fin){
	if(ini>fin){
		return -1;
	}
	int medio = (ini+fin)/2;
	if(vec[medio]==x){
		return medio;
	}else if(vec[medio]>x){
		return Busqueda(x,vec,ini,medio-1);
	}else if(vec[medio]<x){
		return Busqueda(x,vec,medio+1,fin);
	}
	return -1;
	
}

int Part(vector<int>& vec, int ini, int fin){
    int x = vec[fin];  // pivote
    int i = ini - 1;
    for(int j = ini; j < fin; j++){
        if(vec[j] <= x){
            i++;
            swap(vec[i], vec[j]);
        }
    }
    swap(vec[i+1], vec[fin]);
    return i+1;
}


void qs(vector<int>& vec, int ini, int fin){
        if(ini<fin){
                int pivot = Part(vec, ini, fin);
                qs(vec, ini, pivot -1);
                qs(vec,pivot +1, fin);
        }
}

