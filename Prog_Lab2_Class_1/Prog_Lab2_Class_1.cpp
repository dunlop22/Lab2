#include <iostream>
#include <locale.h>
using namespace std;

using namespace std;

struct motor
{
    struct har1
    {
        int koni;
        
        int rasxod;
        int kol_vo_cilindr;
    } motor;

    struct har2
    {
        int age;
        int stag;
        string pol;
        string covid_19;
    } voditel;

    struct har3
    {
        int shirina;
        int visota;
        int diametr;
        string tip_diska;
    } kolesa;

    struct har4
    {
        string tip_korobki;
        int kolvo_peredach;
    } korobka_peredach;

    struct har5
    {
        string tip_privoda;
        string tip_topliva;
        int obem_benzobaka;
        int kolvo_mest;
        double razgon;
    } obchee;
};

class automobil {
    string dannie1;
    int dannie2;
    int dannie3, dannie4;
public:
    void set_motor(int koni1, int rasxod1, int kolvo_cilindr1);

};


struct obchee
{
    int massa;
    string tip_topliva;
    string tip_privoda;
    int kolvo_mest;
    double razgon_do_100;
};

struct avto
{
    motor har1;
    kolesa har2;
    voditel har3;
    korobka_peredach har4;
    obchee har5;
};
int main()
{
    std::cout << "Hello World!\n";
}
