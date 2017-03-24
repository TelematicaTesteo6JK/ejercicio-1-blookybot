#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>11)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){

    cout << "TEST CASES" << endl;
    // Agrega tus casos de prueba
cout<<"Test data: 1/ expected result:10/ actual result:"<<pago_estacionamiento(1)<<endl;
cout<<"Test data: 5/ expected result:50/ actual result:"<<pago_estacionamiento(5)<<endl;
cout<<"Test data: 6/ expected result:54/ actual result:"<<pago_estacionamiento(6)<<endl;
cout<<"Test data: 10/ expected result:98/ actual result:"<<pago_estacionamiento(10)<<endl;
cout<<"Test data: 11/ expected result:77/ actual result:"<<pago_estacionamiento(11)<<endl;
cout<<"Test data: 0/ expected result:0/ actual result:"<<pago_estacionamiento(0)<<endl;
cout<<"Test data: 4/ expected result:40/ actual result:"<<pago_estacionamiento(4)<<endl;
cout<<"Test data: 8/ expected result:72/ actual result:"<<pago_estacionamiento(8)<<endl;
cout<<"Test data: 13/ expected result:91/ actual result:"<<pago_estacionamiento(13)<<endl;



    cout << endl;

}

int main()
{

    casos_de_prueba();

	return 0;
}
