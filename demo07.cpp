#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

main(){
	
	int N;
	
	cout<<"Ingrese tamano: ";
	cin>>N;
	
	int vector[N];
	
	for(int i = 0; i < N; i++){
		int numeroUsuario;
		
		cout<<"Ingrese un numero: ";
		cin>>numeroUsuario;
		
		vector[i] = numeroUsuario;
	}
	
	cout<<"Vector: "<<endl;
	
	for(int i = 0; i < N; i++){
		cout<<i<<" - "<<vector[i]<<endl;
	}
	
	// Busqueda
	int mayor = 0;
	for(int i = 0; i < N; i++){
		if(vector[i] > mayor){
			mayor = vector[i];
		}
	}
	
	cout<<"Mayor: "<<mayor<<endl;
}
