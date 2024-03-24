
// col:   1 2 3
// row 1: A 
// row 2: B C
// row 3: D E F


#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
    int count = 0;
    while(row <= n){
        int col = 1;
        while(col <= row){
            char ch = 'A' + count;
cout << ch;
count++;

col ++;
        }
        cout << endl;
        
        row ++;
    }
    
}