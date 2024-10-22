#include <iostream>
#include <string>
using namespace std;
int main(){

int x;
cout <<"enter x value\n is: ";
cin >> x;

int d;

d = x % 100;

if(d % 4 == 0 || d % 7 == 0  ){
    cout<<"Lucky";
}
else{
    cout<<"Not lucky";
}

}

/* fast if condition     abbreviations 



cout<< (d % 3== 0) ? "YES" : "NO";






*/