#include "header1.h"
struct fecha {
    int año;
    int mes;
    int dia;
    };

int main(){
    string input;
    getline(cin, input);
    
    string s;
    vector<string> vs = {};
    for(int i = 0; i < input.size(); ++i){
        s = s + input[i];
        if(input[i] == ' ' || i == input.size() - 1){
            vs.push_back(s);
            s = "";
        }
    }
    for(auto n : vs){
        cout << n;
    }

    cout << endl;
    string command = vs[0];
    string event = vs[2];
    //int date = stoi(vs[1]);
    //cout << date << endl;
    
    string sdate = vs[1]; 
    string s2;
    vector<int> vi;
    for(int i = 0; i < sdate.size(); ++i){
        s2 += sdate[i];
        if(sdate[i] == '-' || i == sdate.size() - 1){
            vi.push_back(stoi(s2)); //por alguna razón si hay un guión al final de la fecha en la entrada sale segmentation fault y no procesa este for, también si no se coloca la tercera string sale lo mismo :o
            s2 = "";
        }
    }
    cout << endl;
    for(auto n : vi){
        cout << n << ", ";
    }
    cout << endl;
    fecha date;
    date.año = vi[0];
    date.mes = vi[1];
    date.dia = vi[2];
    cout << date.año << " " << date.mes << " " << date.dia << " " << endl;

    /*
    string command = vs[0];
    string event = vs[2];
    int date = stoi(vs[1]); //esto guarda solo el primer número hasta el -, pero si guarda número negativos, es decir puede guardar un año negativo y yap.

    //se podria hacer igual con cuatro fors como en el de buscaminas?

    string date = vs[1]; 
    string s2;
    vector<int> vi;
    for(int i = 0; i < date.size(); ++i){
        s2 += date[1];
        if(date[i] == ‘-‘ || i == date.size - 1){
            vi = stoi(s2);
            S2.1 = to_string(vi[i]); //si es que como guarde int en el anterior paso
            s2 = “”;
        }
    }
    fecha.año year = vi[0];
    fecha.mes month = vi[1];
    fecha.dia day= vi[2];


    map<string, string> date_event;

    void function_add(string command, map<

    string command;
    map<string, string> input;
    string fecha;
    string event;
    cin >> command >> fecha >> event;
    input[fecha] = event;
    
    if(command != "Add" || command != "Del" || command != "Find" || command != "Print"){
        cout << "Unknown command: " << command << endl;
    }
    if(){
        cout << "Wrong date format: " << endl;
    }
    if(1 <= mes && mes >= 12){
        cout << "Month value is invalid: " << endl;
    }
    if(){
        cout << "Day value is invalid: " << endl;
    }
    */

//función erase es de la libreria vector.
    return 0;
}