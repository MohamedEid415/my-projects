#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int arr[3];
    for(int h = 0; h<3;h++){
        cin>>arr[h];
    }
    sort(arr, arr +3);
    cout<< (arr[1]-arr[0])+(arr[2]-arr[1]);
}
