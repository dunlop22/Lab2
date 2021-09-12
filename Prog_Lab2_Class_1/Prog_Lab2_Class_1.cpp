﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <string>
#include <windows.h>
#include "strukturki.h"

using namespace std;

//           while (getchar() != '\n');   - очистка буфера
//           у одного водителя может быть несколько автомобилей

/*struct motor
{
    string name;
    int rab_obem;
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

*/

int gl_menu(int vsego, int kol_vo_vodit)
{
    int menu;
    do
    {
        system("cls");
        cout << "Всего автомобилей с информацией: " << vsego;
        cout << "\nВсего водителей с информацией: " << kol_vo_vodit;
        cout << "\n\n1) Добавить информацию о новом автомобиле\n2) Добавить информацию о новом водителе";
        if (vsego > 0)
        {
            cout << "\n3) Просмотр информации об автомобилях";
        }

        if (kol_vo_vodit > 0 && vsego <= 0)
        {
            cout << "\n3) Просмотр информации о водителях";
        }
        else if (kol_vo_vodit > 0 && vsego > 0)
        {
            cout << "\n4) Просмотр информации о водителях";
        }

        if (vsego > 1 && kol_vo_vodit > 0)
        {
            cout << "5) Сравнение автомобилей";
        }
        else if (vsego > 1 && kol_vo_vodit == 0)
        {
            cout << "4) Сравнение автомобилей";
        }
        if (vsego > 0)
        {
            cout << "0) Изменение информации об автомобиле";
        }
        cout << "\n\nESC - выход";
        menu = _getch();
        if (menu == '1')
        {
            return 1;
        }
        if (menu == '2')
        {
            return 2;   
        }
        if (menu == '3' && vsego > 0)
        {
            return 3;
        }
        else if (menu == '3')
        {
            return 4;
        }
        if (menu == '4' && vsego > 1 && kol_vo_vodit == 0)
        {
            return 5;
        }
        if (menu == '4' && kol_vo_vodit > 0 && vsego > 0)
        {
            return 6;
        }
        if (menu == '5' && vsego > 1 && kol_vo_vodit > 0)
        {
            return 7;
        }
        if (menu == '0' && vsego > 1)
        {
            return 0;
        }
        if (menu == 27)
        {
            return 27;
        }
        
    } while (true);
    //} while (menu != '1' && menu != '2' && menu != '3' && menu != '4' && menu != '5' && menu != 27);
    //system("cls");
    //return int(menu - 48);

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

void new_motor(int tekuchee, struct avto mashina[10], int t)
{
    
    /*cout << "1) Маркировка двигателя: " << mashina[tekuchee].har2.name;
    cout << "2) \nМощность (л.с.): " << mashina[tekuchee].har2.koni;
    cout << "3) \nСредний расход на 100км: " << mashina[tekuchee].har2.rasxod;
    cout << "4) \nКоличество цилиндров: " << mashina[tekuchee].har2.kol_vo_cilindr;
    cout << "5) \nКоличество клапанов на 1 цилиндр: " << mashina[tekuchee].har2.klapan;
    if (t == 0)
    {
        cout << "0) \n\nСохранить изменения и выйти";
    }
    else
    {

    }*/
    system("cls");
    cout << "Добавление информации о двигателе\n\nВведите маркировку двигателя: ";
    getline(std::cin, mashina[tekuchee].har2.name);
    //cout << "\n\n" << qw[tekuchee].har2.name << "\n\n";
    cout << "Введите рабочий объем в литрах: ";
    cin >> mashina[tekuchee].har2.rab_obem;
    cout << "Введите количество лошадинных сил: ";
    cin >> mashina[tekuchee].har2.koni;
    cout << "Введите средний расход топлива на 100км в литрах: ";
    cin >> mashina[tekuchee].har2.rasxod;
    //cout << qw[tekuchee].har2.koni;
    cout << "Введите количество цилиндров: ";
    cin >> mashina[tekuchee].har2.kol_vo_cilindr;
    cout << "Введите количество клапанов на один цилиндр: ";
    cin >> mashina[tekuchee].har2.klapan;
}
    
//функция добавления информации о коробке передач
void new_korobka(int tekuchee, struct avto mashina[10], int t)
{
    system("cls");
    cout << "Добавление информации о коробке передач автомобиля\n\nВведите тип коробки передач (АКПП/МКПП): ";
    cin >> mashina[tekuchee].har4.tip_korobki;
    cout << "Введите количество передач коробки: ";
    cin >> mashina[tekuchee].har4.kolvo_peredach;
}

//функция добавления общей информации об автомобиле
void new_obchee(int tekuchee, struct avto mashina[10], int t)
{
    system("cls");
    cout << "Добавление общей информации об автомобиле\n\nВведите модель автомобиля: ";
    std::getline(std::cin, mashina[tekuchee].har5.name);
    if (((mashina[tekuchee].har5.name).length()) == 0)
    {
        cout << "0";
    }
    else
    {
        cout << "4356467";
    }
    cout << "Введите тип привода (2WD/4WD): ";
    std::getline(std::cin, mashina[tekuchee].har5.tip_privoda);
    cout << "Введите тип топлива (бензин/дизель/электро): ";
    std::getline(std::cin, mashina[tekuchee].har5.tip_topliva);
    cout << "Введите количество посадочных мест: ";
    while (scanf("%d", &mashina[tekuchee].har5.kolvo_mest) != 1)
    {
        printf("Неверно введенно значение количества посадочных мест, попробуйте еще: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
    cout << "Введите время разгона до 100км/ч: ";
    while (scanf("%lf", &mashina[tekuchee].har5.razgon_do_100) != 1)
    {
        printf("Неверно введенно значение разгона до 100км/ч, попробуйте еще: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
    //scanf("%lf", &mashina[tekuchee].har5.razgon_do_100);
    cout << "Введите массу автомобиля: ";
    //scanf("%d", &mashina[tekuchee].har5.massa);
    while (scanf("%lf", &mashina[tekuchee].har5.massa) != 1)
    {
        printf("Неверно введенно значение массы, попробуйте еще: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
    cout << "Введите объем бензобака в литрах: ";
    //scanf("%d", &mashina[tekuchee].har5.obem_benzobaka);
    while (scanf("%lf", &mashina[tekuchee].har5.obem_benzobaka) != 1)
    {
        printf("Неверно введенно значение объема бензобака, попробуйте еще: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
}

//функция добавления информации о колесах автомобиля

//функция добавления информации о новом автомобиле
void new_koleso(int tekuchee, struct avto mashina[10], int t)
{
    system("cls");
    cout << "Добавление информации о колесах автомобиля\n\nВведите ширину колеса: ";
    cin >> mashina[tekuchee].har3.shirina;
    cout << "Введите диаметр колеса в дюймах: ";
    cin >> mashina[tekuchee].har3.diametr;
    cout << "Введите высоту колеса: ";
    cin >> mashina[tekuchee].har3.visota;
    cout << "Введите тип колесного диска (штамповка/литье/ковка): ";
    cin >> mashina[tekuchee].har3.tip_diska;
}

void new_car(int tekuchee, struct avto mashina[10], int *vsego)
{
    system("cls");
    new_obchee(tekuchee, mashina, 0);
    new_motor(tekuchee, mashina, 0);
    new_koleso(tekuchee, mashina, 0);
    new_korobka(tekuchee, mashina, 0);
    *vsego = *vsego + 1;
}

void new_voditel(int teck_voditel, struct voditel vod[10], int *vsego_vodit)
{
    system("cls");
    vod[teck_voditel].num_vod = teck_voditel;
    cout << "Добавление информации о водителе\n\nВведите ФИО водителя: ";
    std::getline(std::cin, vod[teck_voditel].name);
    cout << "Введите возраст: ";
    cin >> vod[teck_voditel].age;
    while (getchar() != '\n');
    cout << "Введите пол водителя (М/Ж): ";
    std::getline(std::cin, vod[teck_voditel].pol);
    cout << "Введите статус Covid-19 (переболел/привит/неизвестно): ";
    std::getline(std::cin, vod[teck_voditel].covid_19);
    cout << "Введите стаж водителя: ";
    cin >> vod[teck_voditel].stag;
    *vsego_vodit = *vsego_vodit + 1;
}



//функция просмотра информации о водителях
void prosmotr_voditel(int vsego_vodit, struct voditel vod[10])
{
    int i;
    system("cls");
    for (i = 0; i < vsego_vodit; i++)
    {
        cout << "Водитель №" << i + 1;
        cout << "\nФИО: " << vod[i].name;
        cout << "\nВозраст: " << vod[i].age;
        cout << "\nСтаж: " << vod[i].stag;
        cout << "\nПол: " << vod[i].pol;
        cout << "\nСтатус Covid-19: " << vod[i].covid_19 << "***************************************\n\n";
    }
    cout << "\n\nДля возврата в меню нажмите любую клавишу.";
    _getch();
}

void vivod_motor(int tekuchee, struct avto mashina[10])
{
    cout << "\n1) Маркировка двигателя: " << mashina[tekuchee].har2.name;
    cout << "\n2) Рабочий объем: " << mashina[tekuchee].har2.rab_obem;
    cout << "\n3) Мощность (л.с.): " << mashina[tekuchee].har2.koni;
    cout << "\n4) Средний расход на 100км: " << mashina[tekuchee].har2.rasxod;
    cout << "\n5) Количество цилиндров: " << mashina[tekuchee].har2.kol_vo_cilindr;
    cout << "\n6) Количество клапанов на 1 цилиндр: " << mashina[tekuchee].har2.klapan;
}

void vivod_obchee(int tekuchee, struct avto mashina[10])
{
    cout << "\n1) Модель: " << mashina[tekuchee].har5.name;
    cout << "\n2) Тип привода: " << mashina[tekuchee].har5.tip_privoda;
    cout << "\n3) Тип топлива: " << mashina[tekuchee].har5.tip_topliva;
    cout << "\n4) Количество посадочных мест: " << mashina[tekuchee].har5.kolvo_mest;
    cout << "\n5) Время разгона до 100км/ч: " << mashina[tekuchee].har5.razgon_do_100;
    cout << "\n6) Объем бензобака: " << mashina[tekuchee].har5.obem_benzobaka;
}

//функция вывода информации о текущих автомобилях
void prosmotr_avto(int vsego, struct avto mashina[10])
{
    int i;
    for (i = 0; i < vsego; i++)
    {
        vivod_motor(i, mashina);
        vivod_obchee(i, mashina);
    }

    _getch();
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
    do
    {
        menu = gl_menu(vsego, kol_vo_vodit);
        if (menu == 0)
        {
            prosmotr_avto(vsego, mashina);
            //редактирование информации об автомобилях
            //вывести список для выбора автомобиля для редактирования   
        }
        if (menu == 1)
        {
            new_car(tekuchee, mashina, &vsego);
        }
        else if (menu == 2)
        {
            new_voditel(teck_voditel, vod, &kol_vo_vodit);
            //prosmotr_avto(vsego);
        }
        else if (menu == 3)
        {
            prosmotr_avto(vsego, mashina);
        }
        else if (menu == 4)
        {
            prosmotr_voditel(kol_vo_vodit, vod);
        }
        else if (menu == 5)
        {
            cout << "сравнение автомобилей";
            _getch();
        }
        else if (menu == 6)
        {
            prosmotr_voditel(kol_vo_vodit, vod);
        }
        else if (menu == 7)
        {
            cout << "сравнение автомобилей";
            _getch();
        }
        /*
        else if (menu == 3)
        {
            compare_avto(vsego);
        }
        */
        else if (menu == 27)
        {
            exit;
        }
    } while (menu != 27);
}
