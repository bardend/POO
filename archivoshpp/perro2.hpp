

#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include "../archivoshpp/gato2.hpp"
using namespace std;
	
class Perro2 : public Animal{
	public:
		//Gato2(string,int ,string ,float );
		Perro2(string raza,int dulzura):
			Animal(raza,dulzura)	
		{}
		
			
		void sonido(){
			cout<<"GUAGUA\n";
			_dulzura-=5;
		}		
};
/*Gato2::Gato2(string raza,int dulzura,string codigo,float nota):Animal(raza,dulzura){
	
	_codigo=codigo;
	_nota=nota;
	}*/
	
	

