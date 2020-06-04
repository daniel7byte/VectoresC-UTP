#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

main(){
	int vector[10];
	
	for(int i = 0; i < 10; i++){
		vector[i] = rand() % 30000 + 1;
	}
	
	// Recorre el vector
	cout<<"Vector: {";
	for(int j = 0; j < 10; j++){
		cout<<" "<<vector[j];
	}
	cout<<" }"<<endl;
	
}
