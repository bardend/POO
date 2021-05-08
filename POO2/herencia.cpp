

#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona{
	private:
	string nombre;
	int edad;
	
	public:
		Persona(string,int );
		void mostrarPersona();
	
	};
	
Persona::Persona(string _nombre,int _edad){
	
	nombre=_nombre;
	edad=_edad;
	}
		
void Persona::mostrarPersona(){
	cout<<nombre<<" "<<edad<<endl;
	}
	
class Alumno : public Persona {
	private:
		string codigo;
		float nota;
	public:
		Alumno(string,int ,string ,float );
		void mostrarAlumno();
	} ;
Alumno::Alumno(string _nombre,int _edad,string _codigo,float _nota):Persona(_nombre,_edad){
	
	codigo=_codigo;
	nota=_nota;
	}
void Alumno::mostrarAlumno(){
	mostrarPersona();
	cout<<codigo<<" "<<nota<<endl;
	}	
	
int main(){
	Alumno alumno1("Aleha",20,"456",19.9);	
	alumno1.mostrarAlumno();
	
	return 0;
	}
	
