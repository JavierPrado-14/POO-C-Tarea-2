#include <iostream>
using namespace std;

class Persona : Propietario {
	private : string nit;
	
	public :
	Persona (){	
	}
	
	Persona(string nom,string ape,string dir,int tel,string n) : Propietario(nom,ape,dir,tel){
		nit = n;
		
	}
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	
		string getNit(){return nit;}
		string getNombres(){return nombres;}
		string getApellidos(){return apellidos;}
		string getDireccion(){return direccion;}
		int getTelefono(){return telefono;}
	
	void mostrar(){
		cout<<"______________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
	}
};
