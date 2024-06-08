#include "header1.h"


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

    /*
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