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
    int rasxod;
    int kol_vo_cilindr;
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
void new_car(int tekuchee, struct avto qw[10])
{
    cout << "Введите название мотора: ";
    getline(std::cin, qw[tekuchee].har2.name);
    cout << "\n\n" << qw[tekuchee].har2.name << "\n\n";
    cout << "Введите количество лошадинных сил мотора: ";
    cin >> qw[tekuchee].har2.koni;
    cout << qw[tekuchee].har2.koni;
    cout << "Введите количество цилиндров в моторе: ";
    cin >> qw[tekuchee].har2.kol_vo_cilindr;

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
    avto qw[10];    //создание массива автомобилей
    menu = gl_menu(vsego, kol_vo_vodit);
    if (menu == 1)
    {
        new_car(tekuchee, qw);
    }
    else if (menu == 2)
    {
        prosmotr_avto(vsego);
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
