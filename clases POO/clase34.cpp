
#include<iostream>
#include<string>
#include<cmath>
#include<vector>


//#include "../archivoshpp/gato2.hpp"	

#include "../archivoshpp/perro2.hpp"	

using namespace std;
void hacer(vector<Animal*> vect){
		Perro2* perro=(Perro2*)vect[0];
		perro->ladra();
	
}
int main(){
		Perro2* p1=new Perro2("dsjhqw",456);
		
		Perro2* ptrPerro=new Perro2("caniche",10);
		//(*ptrPerro).ladra();
		ptrPerro->ladra();	
		
		//vector<Animal>vect;
		vector<Animal*>vect;
		Perro2* p2=new Perro2("sdsd",4);
		p2->ladra();
		vect.push_back(p1);
		vect.push_back(ptrPerro);
		vect.push_back(p2);
			
		Gato2* g1=new Gato2("dasgvb",123);
		vect.push_back(g1);
		
		vect[3]->patita();
		/*
		vect.push_back(g1);
		
		vect[0].patita();
		vect[1].patita();
		vect[2].patita();
		*/
		hacer(vect);
		delete ptrPerro;
		delete p1;
		delete p2;
		delete g1;
	return 0;
	}

