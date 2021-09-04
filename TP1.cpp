#include <iostream>

using namespace std;

void mostrarvec(int vec[], int dim)
{
	for (int i = 0; i < dim; ++i)
		cout << vec[i] << '\t';
    cout << endl;
}

void mostrarmat(int m[][5], int dfil)
{
        const int dcol = 5; // solo por prolijidad

        for (int i = 0; i < dfil; ++i) {
                for (int j = 0; j < dcol; ++j)
                        cout << m[i][j] << '\t';
                cout << endl;
        }

}

void revertir(int Vector[], const int Dim){

int Max = (Dim -1);
int Aux[Dim], a = 0;

	for (int i = 0; i < Dim; i++){

        Aux[Max] = Vector[i];
        Max--;

    	}
	for (int i = 0; i < Dim; i++){

		Vector[i] = Aux[i];

		}
}

void transpuesta(int Matriz[][5], int Dim){

int transpuesta[5][5];

    for(int i = 0; i < 4; i++) { 
        for(int j = 0; j < 4; j++) {
            transpuesta [j][i] = Matriz[i][j];
        }
    }
	for(int i = 0; i < 4; i++) { 
        for(int j = 0; j < 4; j++) {
            Matriz[i][j] = transpuesta[i][j];
        }
    }
}


int main()
{
    const int dim5 {5};
    const int dim10 {10};

    int vec5[dim5] {4, 11, 19, 8, 3};
    int vec10[dim10] {23, 15, 1, 7, 6, 27, 2, 14, 12, 9};

    int matriz[dim5][dim5] {36, 7, 19, 28, 45,
                            17, 33, 42, 3, 25,
                            22, 41, 32, 11, 9,
                            39, 47, 14, 4, 23,
                            16, 38, 8, 27, 44};
    
	cout << "Los vectores originales son: " << endl;
	mostrarvec (vec5, dim5);
	mostrarvec (vec10, dim10);
	revertir (vec5, dim5);
	revertir (vec10, dim10);
	cout << "Los vectores revertidos son: " << endl;
	mostrarvec (vec5, dim5);
	mostrarvec (vec10, dim10);
	cout << "La matriz original es: " << endl;
	mostrarmat (matriz, dim5);
	transpuesta (matriz, dim5);
	cout << "La matriz transpuesta es: " << endl;
	mostrarmat (matriz, dim5);
    return 0;

}
