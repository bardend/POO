
#include<iostream>
#include<string>
#include<cmath>
#include<vector>

#include "../archivoshpp/perro.hpp"
#include "../archivoshpp/persona.hpp"
int main(){
	Persona persona;
	persona.nombre="GUILLEN";
	
	Perro perro("DASD",465);
	
	cout<<perro.getDulzura()<<endl;
	perro.setDulzura(46812);
	cout<<perro.getDulzura()<<endl;
	perro.ladrar();
	perro.patita();
	cout<<Perro::getNumPatas()<<endl;
	cout<<"GA   "<<Perro::getEspecie()<<endl;
	return 0;
	}
