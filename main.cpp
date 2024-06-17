#include "headerPrincipal.h"
#include "funciones.h"

struct FECHA {
    int año;
    int mes;
    int dia;
    };

int main(){
    string input;
    getline(cin, input);
    
    vector<string> vs = separar_input(input);
    
    string comando = vs[0];
    if(comando != "Add" || comando != "Del" || comando != "Find" || comando != "Print"){
        cout << "Unknown command: " << comando << endl;
    }
    
    string fecha = vs[1]; 
    vector<int> vi = stovector_fecha(fecha);
    
    if (vi.size() != 3) {
        cout << "Wrong Date Format: "<< fecha << endl;
    }

    FECHA f;
    f.año = vi[0];
    f.mes = vi[1];
    f.dia = vi[2];
    
    if(comprobar_mes(f.mes) == false) {
        cout << "Month value is invalid: " + to_string(f.mes) << endl;
    }
    if(comprobar_dia(f.dia) == false) {
        cout << "Day value is invalid: " + to_string(f.dia) << endl;
    }

    string evento = vs[2];
    
    map<string, set<string>> eventos;

    if (comando == "Add") {
        add(eventos, fecha, evento);
    } else if (comando == "Del") {
        if (!evento.empty()) { 
            delOne(eventos, fecha, evento);
        } else {
            del(eventos, fecha);
        }
    } else if (comando == "Print") {
        print(eventos);
    }

    return 0;
}