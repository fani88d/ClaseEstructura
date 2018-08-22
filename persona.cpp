#include<iostream> 
using namespace std; 
struct persona {
	char nombre[20];
	int edad;
	float estatura;
};
int main (){
	struct persona p1,p2;
	cout<<"nombre: ";
	cin.getline(p1.nombre,20,'\n');
	cout<<"Edad: "<<endl;
	cin>>p1.edad; 
	cout<<"Estatura: "<<endl; 
	cin>>p1.estatura;
	//mostrar lo guardado 
	cout<<endl<<"Nombre guardado: "<<p1.nombre<<endl; 
	cout<<endl<<"Edad guardado: "<<p1.edad<<endl; 
	cout<<endl<<"estatura guardada"<<p1.estatura<<endl; 
	return 0; 
}
