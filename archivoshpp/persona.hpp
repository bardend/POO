#include<iostream>
#include<cstring>
#include <cmath>

using namespace std;

struct Persona{
	std:: string nombre;
	int edad;
	float peso;
	float altura;
	
	Persona(){
		nombre="Desconodio";
		edad=0;
		peso=0;
		altura=0;
	}
	Persona(string nombre){
		cout<<"Persona creada"<<endl;
		this->nombre=nombre; //nombre de la structura = string nombre
	}
	Persona(int edad,float altura){
		this->edad=edad;
		this->altura=altura;
	}
	Persona(string nombre,int edad,float peso,float altura){
		
		this->nombre =nombre;
		this->edad=edad;
		this->peso=peso;
		this->altura=altura;
	}
	
};

