#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    long long numbers[4];
    for (int i = 0; i < 4; i++)
    {
        cin >>numbers[i];
    }
    long long max = *max_element(numbers, numbers + 4);
    for (int i = 0; i < 4; i++)
    {
        if(max - numbers[i] != 0){
            cout << max - numbers[i]<<" ";
        }
    }
    
        
}
