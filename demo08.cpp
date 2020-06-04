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
	
	// Verifica Ascendente
	bool ascendente = 1;
	int temp = vector[0];
	for(int i = 0; i < N; i++){
		if(vector[i] >= temp){
			temp = vector[i];
		}else{
			ascendente = 0;
			break;
		}
	}
	
	if(ascendente){
		cout<<"Ascendente"<<endl;
	}else{
		cout<<"NO es Ascendente"<<endl;
	}
}
