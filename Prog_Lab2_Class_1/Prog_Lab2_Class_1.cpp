#include <iostream>

using namespace std;


struct motor
{
    int koni;
    string tip_topliva;
    int rasxod;
    int kol_vo_cilindr;
};

struct voditel
{
    int age;
    int stag;
    string pol;
    string covid_19;
};

struct kolesa
{
    int shirina;
    int visota;
    int diametr;
    string tip_diska;
};

struct korobka_peredach
{
    string tip_korobki;
    int kolvo_peredach;
};

struct obchee
{
    string tip_privoda;
    string tip_topliva;
    int obem_benzobaka;
    int kolvo_mest;
    double razgon;
};


int main()
{
    cout << "Hello World!\n";
}
