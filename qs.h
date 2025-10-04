#include <bits/stdc++.h>
using namespace std;

void qs(vector<int>& vec, int ini, int fin){
	if(ini<fin){
		int pivot = Part(vec, ini, fin);
		qs(vec, ini pivot -1);
		qs(vec,pivot +1, fin);
	}
}

int Part(vector<int> vec, int ini, int fin){
	int x = vec[fin];
	int i = ini;
	for(j=ini; j<fin-1; j++){
		if(vec[j]<=x){
			int aux=vec[i];
			vec[i]=vec[j];
			vec[j]=aux;
			i += 1;
		}
	}
	int aux=vec[i];
	vec[i]=vec[fin];
	vec[fin]=aux;
	return i;
}
