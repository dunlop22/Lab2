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
    char name[50];
    double rab_obem;
    double koni;
    double rasxod;
    double kol_vo_cilindr;
    double klapan;
};

struct voditel
{
    double num_vod;
    char name[50];
    double age;
    double stag;
    char pol[50];
    char covid_19[50];
};

struct kolesa
{
    double shirina;
    double visota;
    double diametr;
    char tip_diska[50];
};

struct korobka_peredach
{
    char tip_korobki[50];
    double kolvo_peredach;
};

struct obchee
{
    char name[50];
    char tip_privoda[50];
    char tip_topliva[50];
    double massa;
    double obem_benzobaka;
    double kolvo_mest;
    double razgon_do_100;
};

struct avto
{
    motor har2;
    kolesa har3;
    korobka_peredach har4;
    obchee har5;
    int vod;
};