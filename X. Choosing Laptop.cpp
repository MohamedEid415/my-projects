#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;
 
int main() {
    int n_numbers_of_laptops,chosen_laptop;
    cin >> n_numbers_of_laptops;
    int laps[n_numbers_of_laptops][4];
     for (int rows = 0; rows < n_numbers_of_laptops;rows++){
        for (int col = 0; col < 4; col++){
            cin >> laps[rows][col];
        } 
     }
    int mini_cost = 1001;
     // determine the out dated 
     int nice_lap[n_numbers_of_laptops];
     fill(nice_lap, nice_lap + n_numbers_of_laptops,1);
        for (int i = 0; i < n_numbers_of_laptops; i++) {
            for (int j = 0; j < n_numbers_of_laptops; j++) {
                if (i != j && laps[j][0] > laps[i][0] && laps[j][1] > laps[i][1] && laps[j][2] > laps[i][2]) {
                    nice_lap[i] = 0;
                    break;
                }
            }
        }
     // find the cheapest
     for (int rows = 0; rows < n_numbers_of_laptops;rows++){
            if(nice_lap[rows] != 0 && laps[rows][3] < mini_cost){
                    mini_cost = laps[rows][3];
                    chosen_laptop = rows + 1;
            } 
     }
     // print lap number +1

    cout <<  chosen_laptop;}
