#include <iostream>

using namespace std;

int main(){
    int tamanhoArray;
    int* vetorDinamico = new int[tamanhoArray];

    cout << "Digite  o tamanho do vetor: ";
    cin >> tamanhoArray;

    for( int i = 0 ; i < tamanhoArray; i++){
        vetorDinamico[i] = i * 2;
        cout << "valor: " << vetorDinamico[i] << endl;
    }
delete[] vetorDinamico;
return 0;
}
//vetor alocado dinamicamente