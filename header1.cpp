#include "header1.h"

vector<string> separarInput(string input){
    string s;
    vector<string> v = {};
    for(int i = 0; i < input.size(); ++i){
        s = s + input[i];
        if(input[i] == ' ' || i == input.size() - 1){
            v.push_back(s);
            s = "";
        }
    }
    return v;
}

vector<int> stovectorFecha (string sdate){
    string s;
    vector<int> v;
    for(int i = 0; i < sdate.size(); ++i){
        s += sdate[i];
        if(sdate[i] == '-' || i == sdate.size() - 1){
            v.push_back(stoi(s));
            s = "";
        }
    }
    return v;
}

bool comprobar_mes(int mes){
    if(mes > 0 && mes <= 12){
        return true;
    }
    return false;
}

bool comprobar_dia(int dia){
    if(dia > 0 && dia <= 31)
    {
        return true;
    }
    return false;
}

void add(map<string, set<string>>& mapa, string sdate, string event) {
    mapa[sdate].insert(event);
}

void print(const map<string, set<string>>& mapa) {
    for (const auto& item : mapa) {
        const set<string>& eventos = item.second;
        for (const auto& e : eventos) {
            cout << item.first << " : " << e << endl;
        }
    }
}