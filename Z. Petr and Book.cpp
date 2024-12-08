#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int numberofpages;
    cin >> numberofpages;
    int paperday[7];
    int sum =0;
    for(int i=0; i <7; i++){
        cin >> paperday[i];
    }
    int i = 0;
    while(sum < numberofpages){
        sum += paperday[i];
        if(sum >= numberofpages){
            cout<<i+1;
            break;
        }
        i = (i + 1) % 7;
    }
}
