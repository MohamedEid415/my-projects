#include <iostream>
using namespace std;
int main(){

// inpu1t
double n, w;

// process and output
cout<< "Entre The Weight of truck: ";
cin >>w;

cout<< "\nEntre The bricks that you want to put: ";
cin >>n;

if( (1 <= w <=100) && (1 <= n <=100) ){

int max= w / n;

// output

cout<<"the max number of bricks: "<< max;
}


else{
    cout<<"the range is 1 <= n , w <= 100";
    return 1;
}


}