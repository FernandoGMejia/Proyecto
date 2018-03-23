#include<iostream>
#include<conio.h>
using namespace std;

int main(){

	float i,r,v;

	cout << "Este programa te ayudara a calcular el la corriente eléctrica de la bateria de la maquina del tiempo\n ";
	cout <<"\nDigite el valor de la corriente ";
	cin >>i;

	cout <<"Ahora digita el valor de la resistecia ";
	cin >>r;

	
	v =(i * r);
	
    cout <<"\nLa corriente eléctrica de la bateria de la maquina es de: "<<v<<endl;
	getch();
	return 0;
    }

