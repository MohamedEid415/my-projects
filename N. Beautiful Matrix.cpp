#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){

    int m_Matrix[5][5], l_row, l_col, counter;
    for (int r_rows = 0; r_rows < 5; r_rows++)
    {
        for (int c_columns = 0; c_columns < 5; c_columns++)
        {
            cin >> m_Matrix[r_rows][c_columns];
            if(m_Matrix[r_rows][c_columns] == 1){
                l_row = r_rows;
                l_col = c_columns;
            }
        }
    }
    if(l_row > 2){
        counter += (l_row-2);
    }else{
        counter += (2-l_row);
    }
    if(l_col > 2){
        counter += (l_col-2);
    }else{
        counter += (2-l_col);
    }

    cout << counter;
}
