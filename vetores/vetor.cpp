#include <iostream>

using namespace std;

int main(){

const int tamanhoArray = 10;

int vetor[tamanhoArray] = {1,2,3,4,5};

for(int i =0;  i < tamanhoArray; i++  ){
    cout << " Valores do array: " << vetor[i];
}

}
// Alocação estática do vetor.