#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int litterofwinner, d_winner=0, a_winner=0;
    cin >> litterofwinner;
    char archive[litterofwinner];
    for(int w =0; w < litterofwinner; w++){
        cin >> archive[w];
    }

    for(int w =0; w < litterofwinner; w++){
        if(archive[w] =='A'){
            a_winner +=1;
        }else if(archive[w] =='D'){
            d_winner +=1;
        }
    }
    if(d_winner > a_winner){
        cout<<"Danik";
    }else if(a_winner > d_winner){
        cout<<"Anton";
    }else{
        cout<<"Friendship";
    }
}
