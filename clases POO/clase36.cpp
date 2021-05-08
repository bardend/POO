
#include<iostream>
#include<string>
#include<cmath>
#include<vector>


//#include "../archivoshpp/gato2.hpp"	
//#include "../archivoshpp/perro2.hpp"	
#include "../archivoshpp/namespaces.hpp"
using namespace std;
	
	

int main(){
	
	
	saludos::Hola();
	saludos::Bye();
	
	using namespace saludos;
	Hola();
	Bye();
	return 0;
	}
