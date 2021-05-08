
#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include "../archivoshpp/funciones.hpp"
#include "../archivoshpp/persona.hpp"

#define RAYA do {cerr << "===========================" << endl; } while (false)
#define DBG(x) do {cerr << #x <<" = " << (x) << endl; } while (false)

void suma(int* r){
	
		*r+=1;
	}
using namespace std;
int main(){
	int arr[]={1,2,999};
	DBG(arr[1]);
	DBG(arr);  //ESTO APUNTA AL PUNTERO!
	DBG(*arr);
	DBG(*(arr+1));
		
	int* ptr=arr;
	DBG(*ptr);
	DBG(*(ptr+2));
	
}
