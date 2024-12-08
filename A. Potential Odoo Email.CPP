#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    // definitions
    string before;
    string result="";
    int number_before_sign;
    int num_of_end_index;
    cin >> before; // enter ahmed@odoo.com

    // search for '@'
    for(int w=0; w <=50; w++){
        if(before[w]=='@'){
            number_before_sign = w -1;
            break;
        }else if(w == 50){
            result +="no";
        }
    }
    // find the end of input
    num_of_end_index = before.length()-1;

    // check input is lowercase
    for(int q=0; q <=number_before_sign; q++){
        if(97 > before[q] || before[q] > 122){
            result +="no";
        }
    }
    // if = @odoo.com ??
    string condition ="@odoo.com";
    for(int c=number_before_sign +1; c <=num_of_end_index; c++){
        if(before[c] != condition[c - (number_before_sign + 1)]){
            result +="no";
        }
    }
    if(result != "no"){
        result ="yes";
    }
    cout <<result;

}
