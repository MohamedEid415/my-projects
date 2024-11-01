#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;
int height;
int maximum_height = 0;

for(int i = 1; i <= n; i++){
    cin >> height;
    if( height > maximum_height){
        maximum_height = height; // ===>> update maxheight!!
    }
}
cout << maximum_height;
   
}