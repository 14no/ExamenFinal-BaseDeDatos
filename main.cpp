#include "header1.h"
struct fecha {
    int año;
    int mes;
    int dia;
    };

int main(){
    string input;
    getline(cin, input);
    
    vector<string> vs = separarInput(input);
    
string command = vs[0];
    if(command != "Add" || command != "Del" || command != "Find" || command != "Print"){
        cout << "Unknown command: " << command << endl;
    }
    
string sdate = vs[1]; 
    vector<int> vi = stovectorFecha(sdate);
    
    if (vi.size() != 3) {
        cout << "Wrong Date Format: "<< sdate << endl;
    }

    fecha date;
    date.año = vi[0];
    date.mes = vi[1];
    date.dia = vi[2];
    
    if(comprobar_mes(date.mes) == false) {
        cout << "Month value is invalid: " + to_string(date.mes) << endl;
    }
    if(comprobar_dia(date.dia) == false) {
        cout << "Day value is invalid: " + to_string(date.dia) << endl;
    }

string event = vs[2];
    
    map<string, set<string>> eventos;

    if (command == "Add") {
        if (event.empty()) {
        }
        add(eventos, sdate, event);
    } 
    if (command == "Print") {
        print(eventos);
    }

    return 0;
}