#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

main(){
	
	//int vector[10];
	
	int vector[10] = {1,2,3,4,5,6,7,8,9,0};
	
	// Imprime posicion 5
	cout<<vector[5]<<endl;
	
	// Recorrer vector
	for(int i = 5; i < 10; i++){
		cout<<i<<" - "<<vector[i]<<endl;
	}
	
	// Random
	//int numero = rand () % (N-M+1) + M;   // Este está entre M (limite inferior) y N (limite superior)
	
	// 0 - 30000
	int M = 0, N = 30000;
	int numero = rand () % (N-M+1) + M;
	int numero1 = rand () % (N-M+1) + M;
	int numero2 = rand () % (N-M+1) + M;
	int numero3 = rand () % (N-M+1) + M;
	
	cout<<numero<<endl;
	cout<<numero1<<endl;
	cout<<numero2<<endl;
	cout<<numero3<<endl;
}
