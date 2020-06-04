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

	// Cambia orden 
	int vectorReverso[N];
	int p = 0;
	for(int i = N-1; i >= 0; i--){
		vectorReverso[p] = vector[i];
		p++;
	}
	
	cout<<"Vector reverso: "<<endl;
	
	for(int i = 0; i < N; i++){
		cout<<i<<" - "<<vectorReverso[i]<<endl;
	}
}
