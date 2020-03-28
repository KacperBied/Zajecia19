#include <iostream>
#include "Gadula.h"

using namespace std;

int main()
{
    Gadula gadula;
    Gadula gadula2(3,"hej");
    Gadula plotkara(5,"plotki...");

    gadula.mow();
    gadula2.mow();
    plotkara.mow();

    return 0;
}
