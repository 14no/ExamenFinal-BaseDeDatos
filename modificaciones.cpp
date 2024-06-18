#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main(){
    string comando, fecha, evento;
    map<string, set<string>> mapa;
    vector<string> comandos;
    
    while(true){
        cin >> comando;
//exit para dejar de pedir lineas de comando en la entrada
        if(comando == "exit") break;
//para soportar lineas de entrada vacías
        if(comando.empty()) continue; //¿el comando esta vacío? YES: vaya a repetir el while
//Función PRINT
        if(comando == "Print"){
            comandos.push_back(comando);
            continue;
        }
    
        cin >> fecha;

//En esta parte procesamos el AÑO, se hace un for para reescribirlo o determinar si el formato es incorrecto 
        string s_año = ""; //para reescribir el año
        int hy_año = 0; //para contar los guiones antes del año
        
        for(int i = 0; i < fecha.size(); ++i){
            if(fecha[i] == '-'){ //¿el caracter donde nos encontramos es igual a '-'? YES: contar los guiones que hay antes del año
                ++hy_año;
            }
            if(hy_año >= 2){ //¿los guiones son mayor a 2? YES: el formato es incorrecto y sale del for
                cout << "Wrong date format: " << fecha << endl;
                //s_año = "";
                break;
            } else { //NO: se reescribe el año
                s_año += fecha[i];
                if(s_año == "-" || fecha[i] == '+'){ //¿el año es igual a '-' o el caracter donde estamos es igual a '+'? YES: vaya a repetir el for
                    continue;
                } else { //NO: veamos si terminamos de reescribir el año o no..
                    if(fecha[i + 1] == '-'){ //¿el siguiente caracter es '-'? YES: sale del for porque terminamos de reescribir el año
                        break;   
                    } else { //NO: vaya a repetir el for, porque no terminamos de reescribir el año
                        continue;
                    }
                }
            }
        }
        cout << endl << "Year value final = " << s_año << endl; //nada relevante, solo para ayudarme a verificar que el valor final del año era el que queria

//ignorar esto es el antiguo loop que usaba para procesar la fecha, por si las moscas quería dejarlo   
        /*
        string s;
        vector<int> vi;
        int counter = 0;
        for(int i = 0; i < fecha.size(); ++i){
            if(fecha[i] == '-'){
                ++counter;
                if(counter != 2){
                    s = "-" + s;
                } else {
                    vi.push_back(stoi(s));
                    s = "";
                    counter = 0;
                }
            } else {
                s += fecha[i];
            }
        }
        */

        cin >> evento;

//Función ADD
        if(comando == "Add"){
            mapa[fecha].insert(evento);
        } 
    }

//Para imprimir lo necesario después de haber sido ingresado "exit"    
    cout << comandos.size() << endl; //el tamaño es 1 pero el indice es 0
    for(int i = 0; i < comandos.size(); ++i){
        if(comandos[i] == "Print"){
            for(auto clave : mapa){
            set<string> eventos = clave.second;
            for(auto valor : eventos){
                cout << clave.first << " : " << valor << endl;
            }
        }
        }
    }

    return 0;  
}