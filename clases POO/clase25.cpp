
#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#define RAYA do {cerr << "===========================" << endl; } while (false)
void suma(int* r){
	
		*r+=1;
	}
using namespace std;
int main(){
	int a=4;
	cout<<"El valor es "<<a<<endl;
	cout<<"La direccion es "<<&a<<endl;
	RAYA;
	int* b= &a; //b es un puntero a int
	cout<<"el valor de b es "<<b<<endl;
	cout<<"la direccion de b es "<<&b<<endl;
	cout<<"El valor de la direccion que apunta b es :"<<*b<<endl;	
	
	a=5;
	
	RAYA;
	cout<<"El valor es "<<a<<endl;
	cout<<"La direccion es "<<&a<<endl;
	
	
	cout<<"el valor de b es "<<b<<endl;
	cout<<"la direccion de b es "<<&b<<endl;
	cout<<"El valor de la direccion que apunta b es :"<<*b<<endl;	
	
	RAYA;
	*b=7;
	
	cout<<"El valor es "<<a<<endl;
	cout<<"La direccion es "<<&a<<endl;
	
	
	cout<<"el valor de b es "<<b<<endl;
	cout<<"la direccion de b es "<<&b<<endl;
	cout<<"El valor de la direccion que apunta b es :"<<*b<<endl;	
	
	RAYA;
	int x=1;
	cout<<x<<endl;
	suma(&x);
	cout<<x<<endl;
}
