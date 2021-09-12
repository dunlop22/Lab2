#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <string>
#include <windows.h>
using namespace std;

//           while (getchar() != '\n');   - очистка буфера
//           у одного водителя может быть несколько автомобилей

struct motor
{
    string name;
    int koni;
    double rasxod;
    int kol_vo_cilindr;
    int klapan;
};

struct voditel
{
    int num_vod;
    string name;
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
    string name;
    string tip_privoda;
    string tip_topliva;
    int massa;
    int obem_benzobaka;
    int kolvo_mest;
    double razgon_do_100;
};

struct avto
{
    //voditel har1;
    motor har2;
    kolesa har3;
    korobka_peredach har4;
    obchee har5;
};


int gl_menu(int vsego, int kol_vo_vodit)
{
    int menu;
    do
    {
        system("cls");
        cout << "Всего автомобилей с информацией: " << vsego;
        cout << "\n\n1) Добавить информацию о новом автомобиле\n2) Добавить информацию о новом водителе";
        if (vsego > 0)
        {
            cout << "\n3) Просмотр информации об автомобилях";
        }
        if (kol_vo_vodit > 0)
        {
            cout << "\n4) Просмотр информации об водителях";
        }
        if (vsego > 1)
        {
            cout << "5) Сравнение автомобилей";
        }
        /*
        cout << "\n\n1)Добавить информацию о новом автомобиле.\n2) Добавить информацию о новом водителе\n3) Добавить иформацию о новом моторе\n4) Добавить информацию о новой коробке передач\n5) Добавить новую общую информацию\n5)Добавить информацию о новых колесах\n";

        
        */
        cout << "\n\nESC - выход";
        menu = _getch();
    } while (menu != '1' && menu != '2' && menu != '3' && menu != 27);
    system("cls");
    return int(menu - 48);

    /*
    printf("Введите N (1 или 2): ");
    do
    {
        scanf("%d", &N);
        if (N != 1 && N != 2)
        {
            printf("Значение N не удовлетворяет условию\n");
        }
    } while (N != 1 && N != 2);
    */
    return menu;
}

//функция добавления информации о новом автомобиле
void new_car(int tekuchee, struct avto mashina[10])
{

    cout << "Добавление информации о двигателе\n\nВведите маркировку двигателя: ";
    getline(std::cin, mashina[tekuchee].har2.name);
    //cout << "\n\n" << qw[tekuchee].har2.name << "\n\n";
    cout << "Введите количество лошадинных сил: ";
    cin >> mashina[tekuchee].har2.koni;
    cout << "Введите средний расход топлива на 100км в литрах: ";
    cin >> mashina[tekuchee].har2.rasxod;
    //cout << qw[tekuchee].har2.koni;
    cout << "Введите количество цилиндров: ";
    cin >> mashina[tekuchee].har2.kol_vo_cilindr;
    cout << "Введите количество клапанов на один цилиндр: ";
    cin >> mashina[tekuchee].har2.klapan;



    cout << "Добавление информации о коробке передач автомобиля\n\nВведите тип коробки передач (АКПП/МКПП): ";
    cin >> mashina[tekuchee].har4.tip_korobki;
    cout << "Введите количество передач коробки: ";
    cin >> mashina[tekuchee].har4.kolvo_peredach;

    cout << "Добавление информации о колесах автомобиля\n\nВведите ширину колеса: ";
    cin >> mashina[tekuchee].har3.shirina;
    cout << "Введите диаметр колеса в дюймах: ";
    cin >> mashina[tekuchee].har3.diametr;
    cout << "Введите высоту колеса: ";
    cin >> mashina[tekuchee].har3.visota;
    cout << "Введите тип колесного диска (штамповка/литье/ковка): ";
    cin >> mashina[tekuchee].har3.tip_diska;

    cout << "Добавление общей информации об автомобиле\n\nВведите модель автомобиля: ";
    cin >> mashina[tekuchee].har5.name;
    cout << "Введите тип привода (2WD/4WD)";
    cin >> mashina[tekuchee].har5.tip_privoda;
    cout << "Введите тип топлива (бензин/дизель/электро): ";
    cin >> mashina[tekuchee].har5.tip_topliva;
    cout << "Введите количество посадочных мест: ";
    cin >> mashina[tekuchee].har5.kolvo_mest;
    cout << "Введите время разгона до 100км/ч: ";
    cin >> mashina[tekuchee].har5.razgon_do_100;
    cout << "Введите массу автомобиля: ";
    cin >> mashina[tekuchee].har5.massa;
    cout << "Введите объем бензобака в литрах: ";
    cin >> mashina[tekuchee].har5.obem_benzobaka;
}

void new_voditel(int teck_voditel, struct voditel vod[10])
{
    vod[teck_voditel].num_vod = teck_voditel;
    cout << "Добавление информации о водителе\n\nВведите ФИО водителя: ";
    cin >> vod[teck_voditel].name;
    cout << "Введите возраст: ";
    cin >> vod[teck_voditel].age;
    cout << "Введите пол водителя (М/Ж): ";
    cin >> vod[teck_voditel].pol;
    cout << "Введите статус Covid-19 (переболел/привит/неизвестно): ";
    cin >> vod[teck_voditel].covid_19;
    cout << "Введите стаж водителя: ";
    cin >> vod[teck_voditel].stag;
}
//функция вывода информации о текущих автомобилях
void prosmotr_avto(int vsego)
{

}

void compare_avto(int vsego)
{

}

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int vsego = 0;
    int tekuchee = 0;
    int menu;
    int kol_vo_vodit = 0;
    int teck_voditel = 0;
    avto mashina[10];    //создание массива автомобилей
    voditel vod[10];    //создание массива водителей
    menu = gl_menu(vsego, kol_vo_vodit);
    if (menu == 1)
    {
        new_car(tekuchee, mashina);
    }
    else if (menu == 2)
    {
        new_voditel(teck_voditel, vod);
        //prosmotr_avto(vsego);
    }
    else if (menu == 3)
    {
        compare_avto(vsego);
    }
    else if (menu == 27)
    {
        exit;
    }
}
