#include <iostream>
using namespace std;
int main(){

int n;
cin >> n;
 int i = 1;
 while (i <= n){
    int j = 1;
    while (j <= n){
        cout << "*" ;
        j++;
    }
    cout << endl;
    i++;
 }

}

// * * * *
// * * * *
// * * * *
// * * * *

// row kitne hain?  => 4
// har row me kitne column hain?  => jitne row hain means column = row, somehow we have to deduce relationship between column and rows