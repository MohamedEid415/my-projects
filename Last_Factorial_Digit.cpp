#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;
long long fa_n =1;

for(int m = 2; m <= n; m++){
    fa_n *= m;
}
cout<< fa_n%10;
}
