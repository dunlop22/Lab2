#include <iostream>

using namespace std;

/*
* организовать функцию установки значений в структуры
* организовать функцию сравнения двух машин по их int параметрам
*/

struct avto
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

void automobil::set_motor(int koni1, int rasxod1, int kolvo_cilindr1)
{
    dannie2 = koni1;
    dannie3 = rasxod1;
    dannie4 = kolvo_cilindr1;
}

int main()
{
    //avto qw;
    cout << "Приветствуем вас в программе характеристик - отчета по автомобилю.";


}
