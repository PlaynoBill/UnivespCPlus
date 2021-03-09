#include "tipoItem.h"

const int maxItens = 100;

class pilha{

    public:
    pilha(); //constructor
    ~pilha(); //destructor
    bool isVazio() const;
    bool isCheio() const;
    void print() const;
    void push(tipoItem);
    tipoItem pop();
    private:
    int length;
    tipoItem* estrutura;
};
