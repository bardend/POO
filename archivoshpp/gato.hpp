

#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

class Gato{
	public:
		
		Gato(string raza,int dulzura):
			_raza(raza),
			_dulzura(dulzura)
		
		{}
		//geter
		inline int getDulzura(){return _dulzura;}
	
		//seter
		inline void setDulzura(int dulzura){_dulzura=dulzura;}
		 //inline lo agiliza;
		
		void maulla(){
			cout<<"MIAUMIAU\n";
		}
		void patita(){
			cout<<"patita\n";
		}
		static int getNumPatas(){
			return 4;
		}
		 static  string getEspecie(){
			 return "CHIWAWA";
		}
	private:
		string _raza;
		int _dulzura;


	
};

