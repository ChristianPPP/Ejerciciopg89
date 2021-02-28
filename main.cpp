#include <iostream>
#include <fstream>
using namespace std;

/*
Algoritmo EjercicioP89
3.7 El presidente de la república ha decidido estimular a todos los 
estudiantes de una universidad mediante la asignación de becas mensuales,
para esto se tomarán en consideración los siguientes criterios:
Para alumnos mayores de 18 años con promedio mayor o igual a
9, la beca será de $2000.00; con promedio mayor o igual a 7.5, de
$1000.00; para los promedios menores de 7.5 pero mayores o iguales a 6.0, 
de $500.00; a los demás se les enviará una carta de invitación incitándolos
a que estudien más en el próximo ciclo escolar. A los alumnos de 18 años o 
menores de esta edad, con promediosmayores o iguales a 9, se les dará $3000; 
con promedios menores a 9 pero mayores o iguales a 8, $2000; para los alumnos 
con promedios menores a 8 pero mayores o iguales a 6, se les dará $100, y a los
alumnos que tengan promedios menores a 6 se les enviará carta de
invitación. Realice el algoritmo correspondiente y represéntelo con
un diagrama de flujo.
*/

int main (){
  ofstream becas;
  becas.open("becas.txt", ios::app);
  string nom, uni;
  int eda, opc;
  float prom;
	cout<<"\nBIENVENIDO AL SISTEMA DE BECAS UNIVERSITARIAS\n";
  becas<<"REGISTRO DE BECAS\n";
  do 
  {
  cout<<"\nIngrese el nombre del estudiante: ";
	cin>>nom;
	cout<<"\nIngrese la edad del estudiante: ";
	cin>>eda;
	cout<<"\nA que universidad pertenece el estudiante: ";
	cin>>uni;
	cout<<"\nIngrese el promedio obtenido por el estudiante durante el último semestre en la "<<uni<<": ";
	cin>>prom;
	cout<<"\n\nEl estudiante "<<nom<<" perteneciente a "<<uni<<" ha obtenido un promedio de "<<prom<<" en el último semestre.";
	cout<<"\nPor lo tanto: ";
  becas<<"\nNombre del estudiante: "<<nom;
  becas<<"\nEdad del estudiante: "<<eda;
  becas<<"\nUniversidad a la que pertenece: "<<uni;
  becas<<"\nPromedio: "<<prom;
	if (eda>18) 
  {
    if (prom>=9)
    {
      becas<<"\nMonto de la beca: $2000.00.";
      cout<<"\nObtiene una beca de $2000.00.";
    } 	
		else
    {
			if (prom>=7.5) 
      {
        becas<<"\nMonto de la beca: $1000.00.";
        cout<<"\nObtiene una beca de $1000.00.";
      }
			else
      {
				if (prom<7.5 && prom>=6)
        {
          becas<<"\nMonto de la beca: $500.00.";
          cout<<"\nObtiene una beca de $500.00.";
        }
				else
        {
          becas<<"\nNo aplica para una beca.";
          cout<<"\nDebe esforzarse más para ser acreedor de una beca el proximo semestre.";
        }
      } 
    }
  }
	else 
  {
		if (prom>=9)
    {
      becas<<"\nMonto de la beca: $3000.00.";
      cout<<"\nObtiene una beca de $3000.00.";
    }
		else 
    {
			if (prom<9 & prom>=8)
      {
        becas<<"\nMonto de la beca: $2000.00.";
        cout<<"\nObtiene una beca de $2000.00.";
      }	
			else
      {
				if (prom<8 & prom>=6)
        {
          becas<<"\nMonto de la beca: $100.00.";
          cout<<"\nObtiene una beca de $100.00.";
        }
				else
        {
          becas<<"\nNo aplica para una beca.";
          cout<<"\nDebe esforzarse más para ser acreedor a una beca el proximo semestre.";
        }	
      }
    }
  }
  cout<<"\nSe desea registrar otro estudiante (1/0): ";
  cin>>opc;
  becas<<"\n";
  }while(opc!=0);
  becas.close();
  return 0;
}