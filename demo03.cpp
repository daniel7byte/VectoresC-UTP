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
	
	int X, contador = 0;
	cout<<"Buscar: ";
	cin>>X;
	
	for(int i = 0; i < N; i++){
		if(vector[i] == X){
			contador++;
		}
	}
	
	cout<<"Numero de veces de X: "<<contador<<endl;
}
