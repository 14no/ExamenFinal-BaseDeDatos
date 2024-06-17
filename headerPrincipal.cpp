#include "headerPrincipal.h"

string format_fecha_print(FECHA fecha) {
    string año;
    if(fecha.año < 1000){
        año = "0" + to_string(fecha.año);
    }
    if(fecha.año < 100){
        año = "00" + to_string(fecha.año);
    }
    if(fecha.año < 10){
        año = "000" + to_string(fecha.año);
    } else {
        año = to_string(fecha.año);
    }
    
    string mes, dia;
    if(fecha.mes < 10){
        mes = "0" + to_string(fecha.mes);
    } else {
        mes = to_string(fecha.mes);
    }

    if(fecha.dia < 10){
        dia = "0" + to_string(fecha.dia);
    } else {
        dia = to_string(fecha.dia);
    }
    string f = año + "-" + mes + "-" + dia ;
    return f;
}

vector<int> stovector_fecha(string fecha){
    string s;
    vector<int> v;
    int counter_hypens = 0;
    for (int i = 0; i < fecha.size(); ++i) {
    if (fecha[i] == '-') {
    ++counter_hypens;
    if (!s.empty()) {
        v.push_back(stoi(s));
        s = "";
    }
    } else if (fecha[i] == '+') {
        if (!s.empty()) {
            v.push_back(stoi(s));
            s = "";
        }
    } else {
        s += fecha[i];
    }
    }
    if (!s.empty()) {
        v.push_back(stoi(s));
    }
    
    if(counter_hypens >= 4){
        cout << "Wrong date format: " << fecha << endl;
    }
    return v;
}

bool comprobar_mes(int mes){
    if(mes >= 1 && mes <= 12){
        return true;
    }
    return false;
}

bool comprobar_dia(int dia){
    if(dia >= 1 && dia <= 31){
        return true;
    }
    return false;
}