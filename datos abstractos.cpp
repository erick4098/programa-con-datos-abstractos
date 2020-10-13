#include<iostream>
using namespace std;

struct alumnos{
	int edad;
	string nombre,domicilio;
};
int main (int argc,char** argv){
	alumnos a1,a2;
	cout<<"por favor introduce el nombre del alumno: "<<endl;
	cin>>a1.nombre;
	cout<<"por favor introduce la edad del alumno: "<<endl;
	cin>>a1.edad;	
	cout<<"por favor introduce el domicilio del alumno: "<<endl;
	cin>>a1.domicilio;
	system("cls");
	cout<<"por favor introduce el nombre del segundo alumno: "<<endl;
	cin>>a2.nombre;
	cout<<"por favor introduce la edad del segundo alumno: "<<endl;
	cin>>a2.edad;	
	cout<<"por favor introduce el domicilio del alumno: "<<endl;
	cin>>a2.domicilio;	
	system("cls");
	
cout<<"\n el nombre del primer alumno es:---------"<<a1.nombre;
cout<<"\n la edad del primer alumno es:-----------"<<a1.edad;
cout<<"\n el domicilio del primer alumno es:------"<<a1.domicilio;
cout<<"\n el nombre del segundo alumno es:--------"<<a2.nombre;
cout<<"\n la edad del segundo alumno es:----------"<<a2.edad;
cout<<"\n el domicilio del primer alumno es:------"<<a2.domicilio;
if(a1.edad>a2.edad){
	cout<<"\n\n el nombre del alumno mayor es:"<<a1.nombre;
	cout<<"\n\n edad:"<<a1.edad;
}else
	if(a2.edad>a1.edad){
cout<<"\n\n\n el nombre del alumno mayor es:----------"<<a2.nombre;
cout<<"\n edad:-----------------------------------"<<a2.edad<<"\n\n\n\n\n\n";
	}

	return 0;
}
