#include "headerPrincipal.h"

vector<string> separar_input(string input){
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

vector<int> stovector_fecha (string fecha){
    string ss;
    vector<int> vi;
    int counter_hypens = 0;
    bool negative = false;
    for (int i = 0; i < fecha.size(); ++i) {
        if (fecha[i] == '-') {
            ++counter_hypens;
            if (!ss.empty()) {
                vi.push_back(stoi(ss));
                ss = "";
            }
            negative = true;
        } else if (fecha[i] == '+') {
            if (!ss.empty()) {
                vi.push_back(stoi(ss));
                ss = "";
            }
            negative = false;
        } else {
            ss += fecha[i];
        }
    }
    if (!ss.empty()) {
        vi.push_back(stoi(ss));
    }
    return vi;
    /*
    string s;
    vector<int> v;
    for(int i = 0; i < fecha.size(); ++i){
        s += fecha[i];
        if(fecha[i] == '-' || i == fecha.size() - 1){
            v.push_back(stoi(s));
            s = "";
        }
    }
    return v;
    */
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