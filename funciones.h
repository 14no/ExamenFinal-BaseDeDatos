#include "headerPrincipal.h"

void add(string fecha, string evento, map<string, set<string>>& FechaEventos);
void del_one(string fecha, string evento, map<string, set<string>>& FechaEventos);
void del(string fecha, map<string, set<string>>& FechaEventos);
void find(string fecha, map<string, set<string>>& FechaEventos);
void print(const map<string, set<string>>& FechaEventos);