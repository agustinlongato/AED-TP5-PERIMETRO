#include <iostream>
using namespace std;

double GetNumeroPositivo () {
	double Numero;
	while (true) {
		cin >> Numero;
		if (Numero>0) {
		return Numero;	
		 }else {
			cout << "Numero Invalido" << endl;
		}
	}
}

double GetPerimetro (double Base,double Altura) {
	return Base*Altura;
}

int main () {
	
	double Base,Altura;
	
	while (true) {
	
	cout << "Ingresar la base del rectangulo" << endl;
	Base = GetNumeroPositivo ();
	
	cout << "ingresar la altura del rectangulo" << endl;
	Altura = GetNumeroPositivo ();
	
	if ( Base !=  Altura) {
		cout << "El perimetro del rectangulo es: " << GetPerimetro (Base,Altura) << endl;
		return 0;
	} else {
		cout << "La base y la altura no pueden ser iguales" << endl;
	}
	
	}	
}
