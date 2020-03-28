#include "Napis.h"
#include <iostream>

using namespace std;

Napis::Napis(int rozmiar)
{
    miejsce_ = rozmiar;
    ile_liter_= 0;
    litery_ = new char[miejsce_];
}

Napis::Napis(const Napis& n)
{
    miejsce_ = n.miejsce_;
    ile_liter_= n.ile_liter_;
    litery_ = new char[miejsce_];

    if (ile_liter_ > 0) for(unsigned int i=0; i<miejsce_; i++) litery_[i] = n.litery_[i];
}

Napis::~Napis()
{
    cout<<"Destruktor"<<endl;
    delete [] litery_;
}

void Napis::wypisz()
{
    cout<<endl<<"WYPISUJE NAPIS: ";
    for(unsigned int i=0; i<ile_liter_; i++) cout<<litery_[i];
    cout<<endl<<endl;
}

void Napis::wstaw(const char znak)
{
    if(ile_liter_ == miejsce_)
    {
        char* nowe = new char[ile_liter_+1];

        for(unsigned int i=0;i<ile_liter_;i++) nowe[i] = litery_[i];

        nowe[ile_liter_] = znak;
        litery_ = nowe;
        delete [] nowe;

        miejsce_++;
        cout<<"Realokowano pamiec!"<<endl;
    }
    else
    {
        litery_[ile_liter_] = znak;
    }
    cout<<"Poprawnie umieszczono znak: "<<znak<<endl;

    ile_liter_++;
}
