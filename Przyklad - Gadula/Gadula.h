#ifndef GADULA_H
#define GADULA_H
#include <iostream>

class Gadula
{
    int numer;
    std::string wiadomosc;

    public:
        Gadula();
        Gadula(int nr, std::string wiad);
        ~Gadula();

        void mow();
};

#endif // GADULA_H
