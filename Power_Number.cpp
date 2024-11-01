#include <iostream>
using namespace std;
int main(){
    int a, b;
    int result = 1;
cin >> a >> b;
for(int u = 1; u <= b; u++){
    result *= a;
}
cout << result;
}