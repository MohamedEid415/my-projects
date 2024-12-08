#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    long long n , k;
    cin >> n >> k;

    if( k <  ((n+1)/2)){ 
        cout << k*2 -1; // cos k in odd numbers
    }else{ // k in even num.
        cout << (k - (n+1)/2)*2;
    }
}
