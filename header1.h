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

vector<string> separarInput(string input);
vector<int> stovectorFecha (string sdate);

bool comprobar_mes(int mes);
bool comprobar_dia(int dia);

void add(map<string, set<string>>& mapa, string sdate, string event);
void print(const map<string, set<string>>& mapa); 