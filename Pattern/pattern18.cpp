
// col:   1 2 3 4
// row 1:       *
// row 2:     * *
// row 3:   * * *
// row 4: * * * *


#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
   
    while(row <= n){
       // space print
 int space = n - row;
 while(space){
    cout << " ";
    space --;
 }

       // star print
       int col = 1;
       while(col <= row){
        cout<<"*";
        col++;
       }
       cout<<endl;
       row++;
    }
    
    
}