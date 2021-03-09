#include "pilha.h"
#include <iostream>

using namespace std;


pilha::pilha(){
    length = 0;
    estrutura = new tipoItem[maxItens];
    
}

//não precisei definir tipo pois não tinha no .h
pilha::~pilha(){
    delete [] estrutura;
}

//defini boleano devido a definição do .h
bool pilha::isVazio() const{
 return (length == 0 );   
}

bool pilha::isCheio() const{
    return (length == maxItens);
}

// é obrigatório colocar o parametro que vem do .h no caso foi o tipo item
void pilha::push(tipoItem){
    if(!isCheio()){
        length++;
    }else{
        throw "Pilha está cheia";
    }

}

tipoItem pilha::pop(){
    if(!isVazio()){
        tipoItem aux = estrutura[length -1];
        length--;
        return aux;
        }else{
            throw "Pilha está Vazia";
        }
    };