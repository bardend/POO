
#include<iostream>
#include<string>
#include<cmath>
#include "../archivoshpp/funciones.hpp"

#define RAYA do {cerr << "===========================" << endl; } while (false)
#define DBG(x) do {cerr << #x <<" = " << (x) << endl; } while (false)

using namespace std;
int main(){
	int siz;
	cin>>siz;
	float* notas=new float[siz]; //Arreglo dinamico
	
	for(int i=0;i<siz;i++){
		*(notas+i)=0;
	}
	*notas=45;
	*(notas+1)=23;
	*(notas+5)=123;
	*(notas+siz-1)=9;
	for(int i=0;i<siz;i++)
		DBG(notas[i]);
	
	delete[] notas;
	return 0;
	}
