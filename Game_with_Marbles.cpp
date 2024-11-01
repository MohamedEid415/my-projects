#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long result = 1;
    if(n == 0){
        cout<<"1";
    }
    else if(n >= 1 || n <= 20){
        for(int t=1; t <= n; t++){
            result *=t;
    }
        cout<<result<<endl;
    }


}
