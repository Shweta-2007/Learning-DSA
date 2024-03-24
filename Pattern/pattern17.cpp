
// col:   1 2 3
// row 1: D 
// row 2: C D
// row 3: B C D
// row 4: A B C D


#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
    
    while(row <= n){
        int col = 1;
         char ch = 'A' + n - row;
        while(col <= row){
           
cout << ch;
ch++;

col ++;
        }
        cout << endl;
        
        row ++;
    }
    
}