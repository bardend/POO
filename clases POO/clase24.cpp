
#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#define RAYA do {cerr << "===========================" << endl; } while (false)

#include "../archivoshpp/funciones.hpp"
#include "../archivoshpp/persona.hpp"

using namespace std;

int main(){
	
	
	Persona mi("Juan",15,465.,465.132);
	cout<<mi.nombre<<" "<<mi.edad<<" "<<mi.peso<<" "<<mi.altura<<endl;
	cout<<suma(1,3)<<endl;
	RAYA;
	int n;
	cout<<"Ingrese longitud : \n";
	cin>>n;
	vector<int>vec;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		vec.push_back(x);
	}
	for(auto it=vec.begin();it!=vec.end();++it)
		cout<<*it<<" ";
		
	
	return 0;
}


