#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

struct FECHA {
    int año;
    int mes;
    int dia;
    };

vector<int> stovector_fecha(string fecha);

bool comprobar_mes(int mes);
bool comprobar_dia(int dia);
