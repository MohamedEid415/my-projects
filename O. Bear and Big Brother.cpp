#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int l_Limak, b_bob, calc=0;
    cin >> l_Limak>>b_bob;
    while(l_Limak <= b_bob){
        l_Limak *=3;
        b_bob *=2;
        calc +=1;
    }
    cout <<calc;

}
