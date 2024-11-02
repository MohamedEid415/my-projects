#include <iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    int org = n;
    int revr = 0;
while(n > 0){
revr = revr*10 + n%10;
n /=10;
}
if(org == revr){
    cout<<"YES\n";
}else{
    cout<<"NO\n";

}

}
