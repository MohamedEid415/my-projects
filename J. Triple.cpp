#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int testcases;
    cin >>testcases;
    int test_array[testcases];
    for(int t=0; t < testcases; t++){
        int size_Array;
        cin >> size_Array;
        // make input arr
        int inp[size_Array];
        for(int i =0; i < size_Array; i++){
            cin >> inp[i];
        }


        // make frequency and freqency bulid
        int freq[*max_element(inp, inp + size_Array) +1] ={0};
        for (int i = 0; i < size_Array; i++)
        {
          freq[inp[i]]++;
        }

        for (int i = 0; i < size_Array; i++){
          if(freq[inp[i]] >= 3){
            test_array[t] =inp[i];
            break;
          }else{
            test_array[t] =-1;}
        }
    }
    for(int r=0;r<testcases;r++){
      cout <<test_array[r]<<"\n";
    }
}
