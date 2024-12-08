#include <iostream>
#include <string>

#include <cmath>
using namespace std;
int main(){
    int testcases;
    cin >> testcases;
    int out[testcases];
    fill(out, out + testcases, 1);
    
    for(int t =0;t <testcases; t++){
        int size;
        cin >> size;
        int arr[size] ={0};
        for(int in =0;in < size;in++){
            cin >> arr[in];
        }
        for (int i = 1; i < size; i++) {
            if (abs(arr[i] - arr[i - 1]) != 1) {
                out[t] = 0;
            }else{out[t] = 1;}
        if (abs(arr[i] - arr[i + 1]) != 1) {
                out[t] = 0;
            }else{out[t] = 1;}
        }
        
    }
        for(int in =0;in < testcases ;in++){
            if(out[in]==1)
                cout <<"YES\n";
            else{
                cout <<"NO\n";
            }
        }
}