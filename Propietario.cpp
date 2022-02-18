#include <iostream>

using namespace std;
class Propietario{
	protected : string nit;
				double CUI;
	protected :
			Propietario(){
			}
			Propietario(string n, double c){
				nit = n;
				CUI = c;
				
			
			}
	void mostrar();
	
};
	
