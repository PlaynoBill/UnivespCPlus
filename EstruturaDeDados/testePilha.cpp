#include "pilha.h"
#include <iostream>

using namespace std;

int main(){
tipoItem character;
pilha pilha;
tipoItem pilhaitem;

cout << "Adicione uma String " << endl;
cin.get(character);

while (character != '\n')
{
  pilha.push(character);
  cin.get(character);
}

while (!pilha.isVazio() )
{
   pilhaitem = pilha.pop();
   cout << pilhaitem;

}

cout << endl;

}