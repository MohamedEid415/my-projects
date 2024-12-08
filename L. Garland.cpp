#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;
 
int main() {
    string storage, needed; cin >> storage>> needed;
    int freq_needed[100] = fill(freq_needed,freq_needed +100,0);
    int freq_storage[100] = fill(freq_storage,freq_storage +100,0);
    int found=0;
    for (int i = 0; i < size(storage); i++){
        freq_storage[storage[i]]++;
    }
    for (int i = 0; i < size(needed); i++){
        freq_needed[needed[i]]++;
    }
    for (int i = 0; i < size(needed); i++){
        for (int j = 0; j < size(needed); j++){
            if()
        }
    }


    // testingh
    for (int i = 0; i < size(needed); i++){
        storage.find(needed[i]);
    }


}
