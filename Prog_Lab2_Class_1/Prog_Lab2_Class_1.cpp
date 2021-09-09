#include <iostream>
#include <locale.h>
using namespace std;


struct motor
{
    int koni;
    int rasxod;
    int kol_vo_cilindr;
};

struct kolesa
{
    int shirina;
    int visota;
    int diametr;
};

struct voditel
{
    int age;
    int stag;
    string pol;
    string covid_19;
};

struct korobka_peredach
{
    string tip_korobki;
    int kol_vo_peredach;
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
    setlocale(LC_ALL, "RUS");
    int tekuchee;
    int vsego = 0;

    cout << "Всего автомобилей: " << vsego;
    cout << "\n\nВыберите пункт для введения данных об авто.";
}
