#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;
int sumbmission = 0;
for(int j = n; j > 0; j--){
    if(n % j ==0){
        sumbmission += j;
    }
}
cout << sumbmission;
}