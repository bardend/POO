
#include<iostream>
#include<string>
#include<cmath>
#include "../archivoshpp/funciones.hpp"
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

int main(){
	
	Persona yo("Rian");
	
	yo.edad=20;
	yo.peso=60.9f;
	yo.altura=7.81f;
	
	Persona amigo(23,564.45f);
	Persona conocido;
	cout<<amigo.edad<<endl;
	cout<<amigo.altura<<endl;
	Persona mi("Juan",15,465.,465.132);
	cout<<mi.nombre<<" "<<mi.edad<<" "<<mi.peso<<" "<<mi.altura<<endl;
	cout<<suma(1,3)<<endl;
	return 0;
}
