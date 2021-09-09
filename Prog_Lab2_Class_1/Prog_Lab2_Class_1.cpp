#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

//           while (getchar() != '\n');   - очистка буфера


struct motor
{
    int koni;
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
    double razgon_do_100;
};

struct avto
{
    voditel har1;
    motor har2;
    kolesa har3;
    korobka_peredach har4;
    obchee har5;
};


int gl_menu(int vsego)
{
    int menu;
    do
    {
        system("cls");
        cout << "Всего автомобилей с информацией: " << vsego;
        cout << "\n\n1)Добавить информацию о новом автомобиле.\n2)Просмотр информации об автомобилях.\n";
        if (vsego > 1)
        {
            cout << "3) Сравнение автомобилей";
        }
        cout << "\n\nESC - выход";
        menu = _getch();
    } while (menu != '1' && menu != '2' && menu != '3' && menu != 27);
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
void new_car(int tekuchee)
{

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
    int vsego = 0;
    int tekuchee = 0;
    int menu;

    menu = gl_menu(vsego);
    if (menu == 1)
    {
        new_car(tekuchee);
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
