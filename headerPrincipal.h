#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

struct fecha {
    int año;
    int mes;
    int dia;
    };

vector<string> separar_input(string input);
vector<int> stovector_fecha (string fecha);

bool comprobar_mes(int mes);
bool comprobar_dia(int dia);
