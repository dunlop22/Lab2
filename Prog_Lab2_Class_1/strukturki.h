#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;

struct motor
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