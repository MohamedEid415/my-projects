#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int l_length, s_steps=0;
    cin >> l_length; //12
    while (l_length >= 5)
    {
        l_length-=5;
        s_steps++;
    }
    while (l_length >= 4)
    {
        l_length-=4;
        s_steps++;
    }
    while (l_length >= 3)
    {
        l_length-=3;
        s_steps++;
    }
    while (l_length >= 2)
    {
        l_length-=2;
        s_steps++;
    }
    while (l_length >= 1)
    {
        l_length-=1;
        s_steps++;
    }

    cout << s_steps;
}
