#include <iostream>
using namespace std;
int main() {
int t;
int n1, n2;
cin >>t;

for(int times = 1; times <= t; times++){
    cin >>n1 >>n2;
    if(n1 > n2){
        cout<<">\n";}
    else if(n1 < n2){
        cout<<"<\n";}
    else{
        cout<<"=\n";}
}

}