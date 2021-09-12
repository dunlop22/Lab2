#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <string>
#include <windows.h>
#include "strukturki.h"
#include <stdio.h>
#include <stdlib.h>
#include "function.h"

using namespace std;

//сделать привязку водителя к автомобилю
//сделать удаление водителя



//           while (getchar() != '\n');   - очистка буфера

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
        if (kol_vo_vodit > 0)
        {
            cout << "\n4) Просмотр информации о водителях";
        }
        if (vsego > 1)
        {
            cout << "\n5) Сравнение автомобилей";
        }
        if (kol_vo_vodit > 0)
        {
            cout << "\n8) Удалить информацию о водителе";
        }
        if (vsego > 0)
        {
            cout << "\n9) Удалить информацию об автомобиле";
        }
        if (kol_vo_vodit > 0)
        {
            cout << "\n\n0) Изменение информации о водителе";
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
        if (menu == '4' && kol_vo_vodit > 0)
        {
            return 4;
        }
        if (menu == '5' && vsego > 1)
        {
            return 5;
        }
        if (menu == '8' && kol_vo_vodit > 0)
        {
            return 9;
        }
        if (menu == '9' && vsego > 0)
        {
            return 9;
        }
        if (menu == '0' && kol_vo_vodit > 0)
        {
            return 0;
        }
        if (menu == 27)
        {
            return 27;
        }
    } while (true);
}

//функция добавления информации о двигателе
void new_motor(int tekuchee, struct avto *mashina)
{
    system("cls");
    cout << "Добавление информации о двигателе\n\nВведите маркировку двигателя: ";
    gets_s(mashina[tekuchee].har2.name);
    while (strlen(mashina[tekuchee].har2.name) == 0)
    {
        printf("Неверно введена маркировка двигателя, попробуйте еще: ");
        gets_s(mashina[tekuchee].har2.name);
    }
    
    cout << "Введите рабочий объем двигателя в литрах: ";
    while (scanf("%lf", &mashina[tekuchee].har2.rab_obem) != 1)
    {
        printf("Неверно введено значение объема двигателя, попробуйте еще: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');

    cout << "Введите количество лошадинных сил: ";
    while (scanf("%lf", &mashina[tekuchee].har2.koni) != 1)
    {
        printf("Неверно введено значение количества лошадиных сил, попробуйте еще: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');

    cout << "Введите средний расход топлива на 100км в литрах: ";
    while (scanf("%lf", &mashina[tekuchee].har2.rasxod) != 1)
    {
        printf("Неверно введено значение расхода на 100км, попробуйте еще: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');

    cout << "Введите количество цилиндров: ";
    while (scanf("%lf", &mashina[tekuchee].har2.kol_vo_cilindr) != 1)
    {
        printf("Неверно введено значение количества цилиндров, попробуйте еще: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');

    cout << "Введите количество клапанов на один цилиндр: ";
    while (scanf("%lf", &mashina[tekuchee].har2.klapan) != 1)
    {
        printf("Неверно введено значение количества клапанов, попробуйте еще: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
}
    
//функция добавления информации о коробке передач
void new_korobka(int tekuchee, struct avto *mashina)
{
    system("cls");
    cout << "Добавление информации о коробке передач автомобиля\n\nВведите тип коробки передач (АКПП/МКПП): ";
    gets_s(mashina[tekuchee].har4.tip_korobki);
    while (strlen(mashina[tekuchee].har4.tip_korobki) == 0)
    {
        printf("Неверно введена модель автомобиля, попробуйте еще: ");
        gets_s(mashina[tekuchee].har4.tip_korobki);
    }

    cout << "Введите количество передач коробки: ";
    while (scanf("%lf", &mashina[tekuchee].har4.kolvo_peredach) != 1)
    {
        printf("Неверно введено значение количества передач, попробуйте еще: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
}

//функция добавления общей информации об автомобиле
void new_obchee(int tekuchee, struct avto *mashina)
{
    system("cls");
    cout << "Добавление общей информации об автомобиле\n\nВведите модель автомобиля: ";
    gets_s(mashina[tekuchee].har5.name);
    while (strlen(mashina[tekuchee].har5.name) == 0)
    {
        printf("Неверно введена модель автомобиля, попробуйте еще: ");
        gets_s(mashina[tekuchee].har5.name);
    }

    cout << "Введите тип привода (2WD/4WD): ";
    gets_s(mashina[tekuchee].har5.tip_privoda);
    while (strlen(mashina[tekuchee].har5.tip_privoda) == 0)
    {
        printf("Неверно введен тип привода, попробуйте еще: ");
        gets_s(mashina[tekuchee].har5.tip_privoda);
    }

    cout << "Введите тип топлива (бензин/дизель/электро): ";
    gets_s(mashina[tekuchee].har5.tip_topliva);
    while (strlen(mashina[tekuchee].har5.tip_topliva) == 0)
    {
        printf("Неверно введен тип топлива, попробуйте еще: ");
        gets_s(mashina[tekuchee].har5.tip_topliva);
    }

    cout << "Введите количество посадочных мест: ";
    while (scanf("%lf", &mashina[tekuchee].har5.kolvo_mest) != 1)
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

    cout << "Введите массу автомобиля: ";
    while (scanf("%lf", &mashina[tekuchee].har5.massa) != 1)
    {
        printf("Неверно введенно значение массы, попробуйте еще: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');

    cout << "Введите объем бензобака в литрах: ";
    while (scanf("%lf", &mashina[tekuchee].har5.obem_benzobaka) != 1)
    {
        printf("Неверно введенно значение объема бензобака, попробуйте еще: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
}

//функция добавления информации о колесах автомобиля
void new_koleso(int tekuchee, struct avto *mashina)
{
    system("cls");
    cout << "Добавление информации о колесах автомобиля\n\nВведите ширину колеса: ";
    while (scanf("%lf", &mashina[tekuchee].har3.shirina) != 1)
    {
        printf("Неверно введено значение ширины колеса, попробуйте еще: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
    
    cout << "Введите высоту колеса: ";
    while (scanf("%lf", &mashina[tekuchee].har3.visota) != 1)
    {
        printf("Неверно введено значение высоты колеса, попробуйте еще: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
    
    cout << "Введите диаметр колеса в дюймах: ";
    while (scanf("%lf", &mashina[tekuchee].har3.diametr) != 1)
    {
        printf("Неверно введено значение диаметра колеса, попробуйте еще: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');

    cout << "Введите тип колесного диска (штамповка/литье/ковка): ";
    gets_s(mashina[tekuchee].har3.tip_diska);
    while (strlen(mashina[tekuchee].har3.tip_diska) == 0)
    {
        printf("Неверно введен тип колесного диска, попробуйте еще: ");
        gets_s(mashina[tekuchee].har3.tip_diska);
    }
}

//функция добавления информации о новом автомобиле
void new_car(int tekuchee, struct avto *mashina, int *vsego)
{
    system("cls");
    tekuchee = *vsego;
    new_obchee(tekuchee, mashina);
    new_motor(tekuchee, mashina);
    new_koleso(tekuchee, mashina);
    new_korobka(tekuchee, mashina);
    *vsego = *vsego + 1;
}

//функция добавления информации о новом водителе
void new_voditel(int teck_voditel, struct voditel *vod, int *vsego_vodit, int red, int new_v)
{
    if (red == 0)
    {
        system("cls");
        cout << "Добавление информации о водителе\n\n";
    }
    if (red == 1 || new_v == 1)
    {
        
        vod[teck_voditel].num_vod = teck_voditel;
        cout << "Введите ФИО водителя : ";
        gets_s(vod[teck_voditel].name);
        while (strlen(vod[teck_voditel].name) == 0)
        {
            printf("Неверно введен ФИО водителя, попробуйте еще: ");
            gets_s(vod[teck_voditel].name);
        }
    }
    
    if (red == 2 || new_v == 1)
    {
        cout << "Введите возраст: ";
        while (scanf("%lf", &vod[teck_voditel].age) != 1)
        {
            printf("Неверно введен возраст водителя, попробуйте еще: ");
            while (getchar() != '\n');
        }
        while (getchar() != '\n');
    }

    if (red == 3 || new_v == 1)
    {
        cout << "Введите пол водителя (М/Ж): ";
        gets_s(vod[teck_voditel].pol);
        while (strlen(vod[teck_voditel].pol) == 0)
        {
            printf("Неверно введен пол водителя, попробуйте еще: ");
            gets_s(vod[teck_voditel].pol);
        }
    }
    
    if (red == 4 || new_v == 1)
    {
        cout << "Введите статус Covid-19 (переболел/привит/неизвестно): ";
        gets_s(vod[teck_voditel].covid_19);
        while (strlen(vod[teck_voditel].covid_19) == 0)
        {
            printf("Неверно введен статус COVID-19, попробуйте еще: ");
            gets_s(vod[teck_voditel].covid_19);
        }
    }
    
    if (red == 5 || new_v == 1)
    {
        cout << "Введите стаж водителя: ";
        while (scanf("%lf", &vod[teck_voditel].stag) != 1)
        {
            printf("Неверно введен стаж водителя, попробуйте еще: ");
            while (getchar() != '\n');
        }
        while (getchar() != '\n');
    }
    if (new_v == 1)
    {
        *vsego_vodit = *vsego_vodit + 1;
    }
}

//функция просмотра информации о водителях
void prosmotr_voditel(int vsego_vodit, struct voditel *vod)
{
    int i;
    system("cls");
    for (i = 0; i < vsego_vodit; i++)
    {
        cout << "Водитель №" << i + 1;
        cout << "\nФИО: " << vod[i].name;
        cout << "\nВозраст: " << vod[i].age;
        cout << "\nПол: " << vod[i].pol;
        cout << "\nСтатус Covid-19: " << vod[i].covid_19;
        cout << "\nСтаж: " << vod[i].stag <<"\n***************************************\n\n";
    } 
}

//функция вывода информации о двигателе
void vivod_motor(int tekuchee, struct avto *mashina)
{
    cout << "\n\nИНФОРАЦИЯ О ДВИГАТЕЛЕ:\nМаркировка двигателя: " << mashina[tekuchee].har2.name;
    cout << "\nРабочий объем: " << mashina[tekuchee].har2.rab_obem;
    cout << "\nМощность (л.с.): " << mashina[tekuchee].har2.koni;
    cout << "\nСредний расход на 100км: " << mashina[tekuchee].har2.rasxod;
    cout << "\nКоличество цилиндров: " << mashina[tekuchee].har2.kol_vo_cilindr;
    cout << "\nКоличество клапанов на 1 цилиндр: " << mashina[tekuchee].har2.klapan;
}

//функция вывода общей информации 
void vivod_obchee(int tekuchee, struct avto *mashina)
{
    cout << "\n\nОБЩАЯ ИНФОРМАЦИЯ:\nМодель: " << mashina[tekuchee].har5.name;
    cout << "\nТип привода: " << mashina[tekuchee].har5.tip_privoda;
    cout << "\nТип топлива: " << mashina[tekuchee].har5.tip_topliva;
    cout << "\nКоличество посадочных мест: " << mashina[tekuchee].har5.kolvo_mest;
    cout << "\nВремя разгона до 100км/ч: " << mashina[tekuchee].har5.razgon_do_100;
    cout << "\nОбъем бензобака: " << mashina[tekuchee].har5.obem_benzobaka;
    cout << "\nМасса: " << mashina[tekuchee].har5.massa;
}

//функция вывода информации о коробке передач
void vivod_korobka(int tekuchee, struct avto* mashina)
{
    cout << "\n\nИНФОРМАЦИЯ О КОРОБКЕ ПЕРЕКЛЮЧЕНИЯ ПЕРЕДАЧ\nТип коробки переключения передач: " << mashina[tekuchee].har4.tip_korobki;
    cout << "\nКоличество передач коробки: " << mashina[tekuchee].har4.kolvo_peredach;
}

//функция вывода информации о колесах
void vivod_kolesa(int tekuchee, struct avto* mashina)
{
    cout << "\n\nИНФОРМАЦИЯ О КОЛЕСАХ\nШирина колеса: " << mashina[tekuchee].har3.shirina;
    cout << "\nДиаметр колеса: " << mashina[tekuchee].har3.diametr;
    cout << "\nВысота колеса: " << mashina[tekuchee].har3.visota;
    cout << "\nТип диска: " << mashina[tekuchee].har3.tip_diska;
}

//функция вывода информации о текущих автомобилях
void prosmotr_avto(int vsego, struct avto *mashina)
{
    int i;
    for (i = 0; i < vsego; i++)
    { 
        cout << "\nАвтомобиль №" << i + 1 << "\n";
        vivod_obchee(i, mashina);
        vivod_motor(i, mashina);
        vivod_kolesa(i, mashina);
        vivod_korobka(i, mashina);
        cout << "\n****************************\n";
    }
}

//функция редактирования информации о водителе
void red_voditel(struct voditel *vod, int *kol_vo_vodit)
{
    int numb = 0;
    int numb_punkt = 0;
    do
    {
        prosmotr_voditel(*kol_vo_vodit, vod);
        cout << "Введите номер водителя для изменения: ";
        scanf("%d", &numb);
        while (getchar() != '\n');
    } while (numb < 1 || numb > *kol_vo_vodit);
    do
    {
        system("cls");
        cout << "\n1) ФИО (" << vod[numb - 1].name << ")";
        cout << "\n2) Возраст (" << vod[numb - 1].age << ")";
        cout << "\n3) Пол (" << vod[numb - 1].pol << ")";
        cout << "\n4) Статус Covid-19  (" << vod[numb - 1].covid_19 << ")";
        cout << "\n5) Стаж (" << vod[numb - 1].stag << ")";
        cout << "\n\nВыберите пункт для редактирования информации: ";
        scanf("%d", &numb_punkt);
        while (getchar() != '\n');
    } while (numb_punkt < 1 || numb_punkt > 5);

    new_voditel(numb - 1, vod, kol_vo_vodit, numb_punkt, 0);
}

//функция удаления информации об авто
void del_avto(struct avto* mashina, int *vsego)
{
    int numb, i;
    do
    {
        system("cls");
        prosmotr_avto(*vsego, mashina);
        cout << "\n\nВведите номер авто для удаления: ";
        scanf("%d", &numb);
        while (getchar() != '\n');
    } while (numb < 1 || numb > *vsego);

    //перенос всех машин вниз
    for (i = numb - 1; i < *vsego - 1; i++)
    {
        struct avto *avto_dubl;
        avto_dubl = (avto*)malloc(1 * sizeof(avto));
        *avto_dubl = mashina[i];
        mashina[i] = mashina[i + 1];
    }
    *vsego = *vsego - 1;
    
}

//функция сравнения двух автомобилей
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

    struct avto *mashina;    //создание массива автомобилей
    struct voditel *vod;    //создание массива водителей
    int num = 9;
    mashina = (avto*)malloc(num * sizeof(avto));
    vod = (voditel*)malloc(num * sizeof(voditel));
    do
    {
        menu = gl_menu(vsego, kol_vo_vodit);
        if (menu == 0)
        {
            red_voditel(vod, &kol_vo_vodit);
            //редактирование информации о водителе
            //вывести список для выбора автомобиля для редактирования   
        }
        if (menu == 1)  //добавление нового автомобиля
        {
            new_car(tekuchee, mashina, &vsego);
        }
        else if (menu == 2) //добавление нового водителя
        {
            new_voditel(teck_voditel, vod, &kol_vo_vodit, 0, 1);
        }
        else if (menu == 3) //просмотр информации об автомобилях
        {
            system("cls");
            prosmotr_avto(vsego, mashina);
            cout << "\n\nНажмите любую клавишу для возврата в меню";
            _getch();
        }
        else if (menu == 4) //Просмотр информации о водителе
        {
            system("cls");
            prosmotr_voditel(kol_vo_vodit, vod);
            cout << "\n\nДля возврата в меню нажмите любую клавишу.";
            _getch();
        }
        else if (menu == 5) //сравнение двух автомобилей
        {
            cout << "сравнение автомобилей";
            _getch();
        }
        if (menu == 8)  //удаление информации о водителе
        {
            del_vod();
        }
        if (menu == 9)  //удаление информации об автомобиле
        {
            del_avto(mashina, &vsego);
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
