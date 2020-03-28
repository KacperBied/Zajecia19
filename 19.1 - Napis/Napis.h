#ifndef NAPIS_H
#define NAPIS_H


class Napis
{
    char* litery_;
    unsigned int miejsce_;
    unsigned int ile_liter_;
public:
    Napis(int rozmiar=2);
    Napis(const Napis& n);
    ~Napis();

    void wypisz();
    void wstaw(const char znak);
};

#endif // NAPIS_H
