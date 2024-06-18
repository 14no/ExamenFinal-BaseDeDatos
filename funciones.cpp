#include "headerPrincipal.h"

void add(string fecha, string evento, map<string, set<string>>& FechaEventos){
    FechaEventos[fecha].insert(evento);
}

void del_one(string fecha, string evento, map<string, set<string>>& FechaEventos){
    if(FechaEventos.count(fecha)){
        if(FechaEventos[fecha].erase(evento)){
                cout << "Deleted successfully" << endl;
            } 
            if(FechaEventos[fecha].empty()){
                FechaEventos.erase(fecha);
            }
    } else {
        cout << "Event not found" << endl;
    }
}

void del(string fecha, map<string, set<string>>& FechaEventos){
    FechaEventos.erase(fecha);
}

void find(string fecha, map<string, set<string>>& FechaEventos){
    set<string> eventos = FechaEventos[fecha];
    for (const auto& e : eventos) {
        cout << e << endl;
    }
}

void print(const map<string, set<string>>& FechaEventos){
    for (const auto& item : FechaEventos) {
        const set<string>& eventos = item.second;
        for (const auto& e : eventos) {
            cout << item.first << " : " << e << endl;
        }
    }
}
