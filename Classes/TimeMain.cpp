#include <iostream>
#include "Time.h"

using namespace std;

int main(){

Time tempo(22,19,10);
tempo.print();
tempo.setHour(22);
tempo.setMinute(25);
tempo.setSecond(15);

tempo.print();

cout << "Hora:   " << tempo.getHour() << endl;
cout << "Minuto:   " << tempo.getMinute() << endl;
cout << "Segundo:   " << tempo.getSecond() << endl;

}