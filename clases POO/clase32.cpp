
#include<iostream>
#include<string>
#include<cmath>
#include<vector>


#include "../archivoshpp/gato2.hpp"	

using namespace std;

int main(){
	
	Gato2 gato("asd ",465);
	gato.maulla();
	gato.patita();
	cout<<gato.getDulzura()<<endl;
	return 0;

	}
