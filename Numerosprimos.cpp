#include <iostream>
using namespace std;
 
int main (){
	
	int N, i;

	cout << "Ingrese un numero para evaluar si hasta ese numero hay numeros primos: ";
	cin >> N;

	for (i = 2; i <= N; i++){
		int creci = 2;
		bool Prim = true;

		while (Prim && creci < i){
			if (i % creci == 0){
				Prim = false;
			}
			
			else{
				creci++;
			}
		}

		if (Prim){
			cout << "El numero " << i << " es primo" << endl;
		}
	}
}

