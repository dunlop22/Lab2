#include <iostream>

using namespace std;




struct avto
{
    struct har1
    {
        int koni;
        string tip_topliva;
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

int main()
{
    avto qw;
    cin >> qw.motor.koni;
    cout << "Hello World!\n";
}
