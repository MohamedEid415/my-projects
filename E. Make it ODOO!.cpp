#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;
 
int main() {
    int testcases;
    cin >> testcases;
    int minute[testcases];
    fill(minute, minute + testcases, 0);
    for (int t = 0; t < testcases; t++){
        int timer = 0;
        string words; cin>> words;
        if(words =="ODOO"){minute[t] = 0;}else{

            // cutting
            if(size(words) % 4 !=0){
                int t1=0, t2 =0;
                //transformation
                for (int i = 0; i <= size(words) - 4;){
                    if (words[i] !='O'){timer++;}
                    if(words[i+1] !='D'){timer++;}
                    if (words[i+2] !='O'){timer++;}
                    if (words[i+3] !='O'){timer++;}
                    i+=4;
                }


                
            }

            // cutting
            // if(words.substr(0, 4) =="ODOO"){timer += 1;}
            // if(words.substr(size(words) - 4, 4) =="ODOO"){timer += 1;}
            timer+=2;
            minute[t] = timer;
    }}
    for (int i = 0; i < testcases; i++)
    {
        cout << minute[i]<<"\n";
    }
    

}
