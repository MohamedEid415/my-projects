#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
int t;
string outputs;
cin >>t; //test cases
for(int E=0;E <t; E++){
    string f_word, s_word;
    cin >> f_word>>s_word;
    swap(f_word[0],s_word[0]);

    // concatenation

    outputs +=f_word +" "+ s_word;
}
for(int r=0; r < size(outputs); r++){
    if(r % 7 == 0 && r != 0){
        cout<<"\n";
        cout <<outputs[r];
    }else{
        cout <<outputs[r];
    }
}
}
