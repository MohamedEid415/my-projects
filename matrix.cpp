// *~*~*~*~*~*~*~*~*~*~*~*~*>> Libraries and Includes <<*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~
#include <iostream>
using namespace std;
int main(){

// *~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*>> Intput <<*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*
int matrix [5] [3];
for(int rows = 0; rows < 5; rows ++ ){

    for(int colu = 0; colu < 3; colu ++ ){
            cout<<"Enter the the element of row "<< rows +1;
            cout<<"\n,columin "<< colu + 1 <<" is: ";
        
            cin >> matrix [rows] [colu];
    }
}

int numprint_rows;
cout<< "what is the number of rows whitch you want to print?: ";
cin>> numprint_rows;
// *~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*>> Process <<*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*
int sum_matrix = 0;

    for(int j = 0; j < 5; j++){
        for(int k = 0; k < 3; k++){
            sum_matrix += matrix[j] [k];
        }
    }

int sum_diagonal_items = 0;
for(int i = 0; i < 3; i++){
    sum_diagonal_items += matrix [i] [i];
}
// *~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*>> Output <<*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*
cout<<"the sumbmission of the elements: "<<sum_matrix;
cout<<"\n\nthe sumbmission of diagonal items: "<<sum_diagonal_items;
cout<<"\n\n the rows which you want to print is \n";
    for(int q = 0; q < numprint_rows; q++){
        for(int s = 0; s < 3; s++){
            cout<< matrix[q][s] <<"\t";
        }
        cout<<"\n";
    }

return 0;
}
// *~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*>> End <<*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*
