#include <iostream>
#include <stdio.h>
#include <cstdlib>


using namespace std;

 int main(){
 	int ciclo;
 	int calificacion;
 	int acierto;
 	
 	ciclo = 26;
 	calificacion = 0;
 	acierto = 26;
 	
 	cout << "Aciertos    Calificacion" << endl;
 	do {
 		ciclo--;
 		acierto--;
 		
 		calificacion = (acierto * 100) / 25;
 		cout << " " << acierto << "    " << calificacion << endl;
 		
 		} while (ciclo > 0);

cout << "===> Llamado a otro programa <=====" << endl;
cout << "" << endl;

system("./bin/calcular_area");

cout << "" << endl;
cout << "+------------- Fin Programa ----------------+" << endl;


 	return 0;
 	 

}
