#include<iostream>
#include<stdlib.h>
using namespace std;

struct Estudiante{
	char nombre[50];
	int edad;
	int documento_identidad;
    int semestre_academico;
}Alumnos[2];

int main(){
	cout<<"Este programa almacena los datos de dos estudiantes: \n\n"
	for(int i=1; i<=2; i++){
		fflush(stdin);                        
		cout<<"\n\n   ESTUDIANTE ["<<i<<"]:"<<endl;
		cout<<"Digite su nombre: "; cin.getline(Alumnos[i].nombre,20,'\n');
		cout<<"Digite su edad: "; cin>>Alumnos[i].edad;
		cout<<"Digite su documento de identidad: "; cin>>Alumnos[i].documento_identidad;
		cout<<"Semestre academico: "; cin>>Alumnos[i].semestre_academico;
	}
	system("cls");
	cout<<"\nLos datos de los estudiantes son: "<<endl;
	
	for(int i=1; i<=2; i++){
		cout<<"\n   ESTUDIANTE ["<<i<<"]"<<endl;
		cout<<"Nombre: "<<Alumnos[i].nombre<<endl;
		cout<<"Edad: "<<Alumnos[i].edad<<endl;
		cout<<"Documento de identidad: "<<Alumnos[i].documento_identidad<<endl;
		cout<<"Semstre academico: "<<Alumnos[i].semestre_academico<<endl;	
	}
	cout<<"\n\n";
	system("pause");
	return 0;
	
	
}

