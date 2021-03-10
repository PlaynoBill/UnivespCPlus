#include "fila.h"
#include <iostream>

using namespace std;

fila::fila(){
     primeiro=0;
     ultimo=0;
     estrutura_fila= new tipo_item[maxfila];

}

fila::~fila(){

    delete [] estrutura_fila;
}


 bool fila::isVazio() const{
     return ( primeiro == ultimo );
}

bool fila::isCheio() const{
    return ( ultimo - primeiro == maxfila);
}

void fila::push(tipo_item item) {
    if(!isCheio()){
        estrutura_fila[ultimo % maxfila] = item;
        ultimo++;
    }else{
        throw " Fila está cheia";
    }
}

tipo_item fila::pop(){
    if(!isVazio()){
        estrutura_fila[(primeiro-1) % maxfila];
        primeiro++;
    }else{
        throw "A fila está vazia";
    }

}

void fila::print() const{

    for (int i = primeiro ; i < ultimo; i++){
        cout << estrutura_fila[i % maxfila];
    }
    cout << endl;
}
