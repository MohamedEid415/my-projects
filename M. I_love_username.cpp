#include <iostream>
#include <algorithm>
using namespace std;
// funcs and structs
int amz_performance(int &size,int arr[]){
    int cnt =0;
    int mini =arr[0] , max = arr[0];

    for (int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
            cnt++;
        }
        if(arr[i] < mini){
            mini = arr[i];
            cnt++;
        }
    }
    return cnt;
    
}


int main(){
    int n_contest; cin >> n_contest;
    int scores[n_contest];
    for (int i = 0; i < n_contest; i++){
        cin >> scores[i];
    }
    
    cout << amz_performance(n_contest,scores);
    
}