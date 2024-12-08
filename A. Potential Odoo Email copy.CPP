#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
int main() {
    string email;
    cin >> email;

    int sign = email.find('@'); 
// conditions
    if (sign < 2 || sign > 4 || email.substr(sign + 1) != "odoo.com") {
        cout << "no";
        return 0;
    }
// all small or not??
    for (int i = 0; i < sign; i++) {
        if (!islower(email[i])) {
            cout << "no";
            return 0;
        }
    }
 
    cout << "yes";
    return 0;
}