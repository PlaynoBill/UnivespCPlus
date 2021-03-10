#include "fila.h"
#include <iostream>

using namespace std;

int main(){
    tipo_item character;
    fila fila_teste;
    tipo_item filaChar;
    cout << "Adicione uma String." << endl;
    cin.get(character);

    while (character != '\n' and !fila_teste.isCheio())
    {
        fila_teste.push(character);
        cin.get(character);
    }
    while (!fila_teste.isVazio() )
    {
        filaChar = fila_teste.pop();
        cout << filaChar;
    }
    
    cout << endl;

}
