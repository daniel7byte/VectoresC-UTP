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
	
	// Ordenamiento burbuja
	int aux;
	for(int i=0;i<N;i++){
		for(int j=0;j<N-1;j++){
			if(vector[j] > vector[j+1]){
				aux = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = aux;
			}
		}
	}
	
	// Ascendente
	cout<<"Numeros de forma Ascendente: ";
	for(int i=0;i<N;i++){
		cout<<vector[i]<<" ";
	}
	
	cout<<endl;
}
