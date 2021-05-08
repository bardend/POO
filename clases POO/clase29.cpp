
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

#include "../archivoshpp/perro.hpp"
#include "../archivoshpp/persona.hpp"

using namespace std;

int main(){
	Persona persona;
	persona.nombre="RIcardo";
	cout<<persona.nombre<<endl;
	
	Perro perro("caniche",45);
	cout<<perro.getdulzura()<<endl;
	
	perro.setdulzura(20);
	cout<<perro.getdulzura()<<endl;
	
	perro.ladrar();
	return 0;
}
