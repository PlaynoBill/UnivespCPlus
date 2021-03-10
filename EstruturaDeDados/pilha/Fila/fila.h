#include "tipo_item.h"

const int maxfila=8;

class fila
{
public:
    fila(); //constructor
    ~fila(); //destructor
bool isVazio() const;
bool isCheio() const;
void print() const;
void push(tipo_item);
tipo_item pop();

private:
int primeiro;
int ultimo;
tipo_item* estrutura_fila;

   
};




