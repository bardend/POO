
#include<iostream>
#include<string>
#include<cmath>
#include<vector>


//#include "../archivoshpp/gato2.hpp"	

#include "../archivoshpp/perro2.hpp"	

using namespace std;

int main(){
	//	Perro2* p1=new Perro2("dsjhqw",456);
	//	Animal* a1=p1;
		Perro2* p1=new Perro2("wdjhiqw",6546);
		Gato2* g1=new Gato2("persa",20);
		p1->sonido();
		g1->sonido();
		
		Animal* a1=p1;
		Animal* a2=g1;
	
		a2->sonido();
		a1->sonido();
		cout<<"QWE";
		Animal* f1=new Animal("qweqwe",45);
		f1->sonido();
		
		delete p1;
		delete g1;
		delete a1;
		delete a2;
		delete f1;
		
	return 0;
	}


