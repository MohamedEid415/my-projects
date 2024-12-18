#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
// funcs and structs


int main(){
    int n_wires;cin >> n_wires;
    int n_birds_on_wires[n_wires];
    for (int i = 0; i <n_wires; i++){
        cin >> n_birds_on_wires[i];
    }
    int n_shoots; cin >> n_shoots;
    int wire_Nbird[n_shoots][2];
    for (int row = 0; row < n_shoots; row++){
        for (int col = 0; col < 2; col++){
            cin >> wire_Nbird[row][col];
        } 
    }
    
}