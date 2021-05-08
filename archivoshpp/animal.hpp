

#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

class Animal{
	public:
		
		Animal(string raza,int dulzura):
			_raza(raza),
			_dulzura(dulzura)
		
		{}
		//geter
		inline int getDulzura(){return _dulzura;}
	
		//seter
		inline void setDulzura(int dulzura){_dulzura=dulzura;}
		 //inline lo agiliza;
		
		virtual void sonido() {//override
			
			cout<<"soy animal";
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
	protected:
		int _dulzura;
	private:
		string _raza;

};

