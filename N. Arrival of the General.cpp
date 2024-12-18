#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
// funcs and structs
int n_soldiers; 
int ordering_time(int arr[] ){
    int max = 0, p_max,p_mini,mini = 101, sec=0;
    for (int i = 0; i < n_soldiers; i++){ // find mini max
        if(arr[i] >= max){
            max = arr[i];
            p_max =i;}
        if(arr[i] <= mini){
            mini = arr[i];
            p_mini =i;}
    }
    if(p_max < p_mini){
        sec += (p_max) + abs(n_soldiers-p_mini-1);}
    if(p_mini < p_max){
        sec += (p_max -1) + abs(n_soldiers-p_mini-1);
    }
    return sec;
}


int main(){
    cin >> n_soldiers;
    int high[n_soldiers];
    for (int i = 0; i < n_soldiers; i++){
        cin >> high[i];
    }
    
    cout << ordering_time(high);

}