#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int testcases;
    cin >>testcases;
    string results ="";
    for(int t=0; t < testcases; t++){
        int in_input_number;
        cin >> in_input_number;
        in_input_number -=3;
        string word ="aaa";
        for (int i = 2; i >= 0; i--)
        {
            int a_addition = min(25 , in_input_number);
            word[i] += a_addition;
            in_input_number -= a_addition;
        }
        int o =0;
        while(o < 3){
            results +=word[o];
            o++;
        }

        
    }

    for (int i = 0; i < testcases*3; i++)
    {
        if(i % 3 ==0 && i != 0){
        cout <<"\n"<<results[i];
        }else{
        cout<<results[i];
        }
    }
    
}
