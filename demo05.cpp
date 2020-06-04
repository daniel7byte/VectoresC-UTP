#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

main(){
	
	int N;
	
	cout<<"Ingrese tamano: ";
	cin>>N;
	
	int vector[N];
	int vectorCopia[N];
	
	for(int i = 0; i < N; i++){
		int numeroUsuario;
		
		cout<<"Ingrese un numero: ";
		cin>>numeroUsuario;
		
		vector[i] = numeroUsuario;
		vectorCopia[i] = numeroUsuario;
	}
	
	cout<<"Vector: "<<endl;
	
	for(int i = 0; i < N; i++){
		cout<<i<<" - "<<vector[i]<<endl;
	}
	
	cout<<"Vector Copia: "<<endl;
	
	for(int i = 0; i < N; i++){
		cout<<i<<" - "<<vectorCopia[i]<<endl;
	}
}
