#include "headerPrincipal.h"

void add(map<string, set<string>>& mapa, string sdate, string event);
void del(map<string, set<string>>& mapa, string fecha);
void delOne(map<string, set<string>>& mapa, string fecha, string evento);
void print(const map<string, set<string>>& mapa); 