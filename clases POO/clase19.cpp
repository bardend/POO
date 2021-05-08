#include<iostream>
#include<string>
#include<cmath>
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
	
	return 0;
}
