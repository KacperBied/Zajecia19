#include "Gadula.h"
#include <iostream>

using namespace std;

Gadula::Gadula()
{
    cout << "Konstruuje gadule z numerem domylsnym"<<endl;
    numer = 1;
    wiadomosc="Jestem domyslna";
}

Gadula::Gadula(int nr, string wiad)
{
    numer = nr;
    wiadomosc = wiad;
    cout << "Konstruuje gadule nr: "<<numer<<endl;
}

Gadula::~Gadula()
{
    cout<<"Jestem destruktorem gaduly nr: " <<numer<<endl;
}

void Gadula::mow()
{
    cout<<"Moja wiadomosc: "<<wiadomosc<<endl;
}
