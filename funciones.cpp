#include "headerPrincipal.h"

void add(map<string, set<string>>& mapa, string sdate, string event) {
    mapa[sdate].insert(event);
}

void del(map<string, set<string>>& mapa, string fecha) {
    mapa.erase(fecha);
}

void delOne(map<string, set<string>>& mapa, string fecha, string evento) {
    if (mapa.count(fecha)) {
        mapa[fecha].erase(evento);
        if (mapa[fecha].empty()) {
            mapa.erase(fecha);
        }
    }
}

void print(const map<string, set<string>>& mapa) {
    for (const auto& item : mapa) {
        const set<string>& eventos = item.second;
        for (const auto& e : eventos) {
            cout << item.first << " : " << e << endl;
        }
    }
}