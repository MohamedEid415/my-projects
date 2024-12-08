#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    long long rows, columns;
    cin >> rows>> columns;
    char flag[rows][columns];

    for(int r=0;r<rows;r++){
        for(int c=0;c<columns;c++){
            cin >>flag[r][c];
            if(flag[r][c] < '0' || flag[r][c] > '9'){
                cout <<"NO";
                return 0;  
            }
        }
    }
    // conditions
    for(int r=rows-1;r>0;r--){
        for(int c=columns-1;c>0;c--){
            if(flag[r][c] != flag[r][c-1] || flag[r-1][c] ==flag[r][c]){ // 00
                cout <<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";

}
