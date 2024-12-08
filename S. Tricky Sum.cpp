#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int testcases;
    cin >>testcases;
    long long test_array[testcases];
    for(int t=0; t < testcases; t++){
        long long n_the_limit, power = 1,t_totalpowers=0, sum;
        cin >> n_the_limit;
        // sum 1 to n
        sum = (n_the_limit*(n_the_limit+1))/2;

        while (power <= n_the_limit)
        {
            t_totalpowers+=power;
            power *=2;
        }
        test_array[t]=sum - 2*t_totalpowers;
    }
    for (int i = 0; i < testcases ;i++)
    {
        cout << test_array[i]<<"\n";
    }
    
}
