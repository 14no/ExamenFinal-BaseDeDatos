#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
struct FECHA{
    int año;
    int mes;
    int dia;
};
//Variables globales:
    vector<int> v_fecha;
    
//funciones:
bool validar_fecha(string& fecha);
bool comprobar_mes(int mes);
bool comprobar_dia(int dia);

vector<string> separar_input(string& input);

int main() {
    string input;
    
    string comando;
    string fecha;
    string evento;
    vector<string> v_comandos;
    map<string, set<string>> mapa;
    
while(true){
    getline(cin, input);
    if(input == "exit") break;
    if(input.empty()) continue;
//Separando lo ingresado según los espacios   
    vector<string> v_input = separar_input(input);

//Según el comando:    
    comando = v_input[0];
    if(comando == "Add"){
        fecha = v_input[1];
        if(!validar_fecha(fecha)){
            break;
        } v_fecha.clear();
        
        evento = v_input[2];
        mapa[fecha].insert(evento);
        v_input.clear();
    } else if(comando == "Find"){
        v_comandos.push_back(comando);
        fecha = v_input[1];
        if(!validar_fecha(fecha)){
            break;
        } v_fecha.clear();
        //función Find
        v_input.clear();
    } else if(comando == "Del"){
        v_comandos.push_back(comando);
        fecha = v_input[1];
        if(!validar_fecha(fecha)){
            break;
        } v_fecha.clear();
        
        if(v_input.size() == 2){
            //función Del
        } else {
            evento = v_input[2];
            //función Del_one
        }
        v_input.clear();
    } else if(comando == "Print"){
        v_comandos.push_back(comando);
        //funcion Print
        v_input.clear();
    } else {
        cout << "Unknown command: " << comando << endl;
        break;
    }
}
    
    cout << endl;
    for(auto n : v_comandos){
        cout << n << ", ";
    }
    //Para imprimir lo necesario después de haber sido ingresado "exit"    
    cout << v_comandos.size() << endl; //el tamaño es 1 pero el indice es 0
    for(int i = 0; i < v_comandos.size(); ++i){
        if(v_comandos[i] == "Print"){
            for(auto clave : mapa){
                set<string> eventos = clave.second;
                for(auto valor : eventos){
                    cout << clave.first << " : " << valor << endl;
                }
            }
        } else if(v_comandos[i] == "Find"){
            set<string> eventos = mapa[fecha];
            for (const auto& e : eventos) {
                cout << e << endl;
            }
        } else if(comando == "Del"){
            
        }
    }
    return 0;
}

vector<string> separar_input(string& input){
    string s_input;
    vector<string> v_input;
    for(int i = 0; i < input.size(); ++i){
        if(input[i] == ' '){
            if(!s_input.empty()){
                v_input.push_back(s_input);
                s_input = "";
            }
        } else{
            s_input += input[i];
        }
    }
    if(!s_input.empty()){
        v_input.push_back(s_input);
        s_input = "";
    }
    return v_input;
}

bool validar_fecha(string& fecha){
//AÑO: for para reescribirlo o determinar si el formato es incorrecto 
    string s_año = "";
    int hy_año = 0;
    int i_año = 0;
    for(int i = 0; i < fecha.size(); ++i){
        if(fecha[i] == '-'){
            ++hy_año;
        }
        if(hy_año >= 2){
            cout << "Wrong date format: " << fecha << endl;
            v_fecha.clear();
            return false;
        } else {
            s_año += fecha[i];
            if(s_año == "-" || fecha[i] == '+'){
                if(fecha[i] == '+'){
                    s_año.erase(s_año.size() - 1);
                }
                continue;
            } else {
                if(fecha[i + 1] == '-'){
                    v_fecha.push_back(stoi(s_año));
                    i_año = i;
                    break;   
                } else {
                    continue;
                }
            }
        }
    }
//MES y DIA: for para reescribirlo o determinar si el formato es incorrecto
        string s_mes = "";
        int hy_mes = 0;
        for(i_año += 1; i_año < fecha.size(); ++i_año){
            if(fecha[i_año] == '-'){
                ++hy_mes;
            }
            if(hy_mes >= 3 || (hy_mes == 2 && fecha[i_año + 1] == '+')){
                cout << "Wrong date format: " << fecha << endl;
                v_fecha.clear();
                return false;
            } else {
                s_mes += fecha[i_año];
                if(fecha[i_año] == '-'){
                    if(hy_mes == 1){
                        s_mes = "";
                        continue;   
                    }
                } else if(fecha[i_año] == '+'){
                    s_mes = "";
                    continue;
                } else if(fecha[i_año + 1] == '-' || i_año == fecha.size() - 1){
                    v_fecha.push_back(stoi(s_mes));
                    s_mes = "";
                    hy_mes = 0;
                    continue;
                }
            }
        }
        
        if(v_fecha.size() != 3){
            cout << "Wrong date format: " << fecha << endl;
            return false;
        }
        FECHA f;
        f.año = v_fecha[0];
        f.mes = v_fecha[1];
        f.dia = v_fecha[2];
        if(comprobar_mes(f.mes) == false) {
            cout << "Month value is invalid: " + to_string(f.mes) << endl;
            return false;
        }
        if(comprobar_dia(f.dia) == false) {
        cout << "Day value is invalid: " + to_string(f.dia) << endl;
            return false;
        }
        
    return true;  
}

bool comprobar_mes(int mes){
    if(mes > 0 && mes <= 12){
        return true;
    }
    return false;
}

bool comprobar_dia(int dia){
    if(dia > 0 && dia <= 31){
        return true;
    }
    return false;
}