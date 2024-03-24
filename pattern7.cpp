// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;
int main(){
    int n;
    int count = 1;
    cin >> n;
    int i = 1;
    while(i <= n){
int j = 1;
while( j <= i){  // first row me 1 column, second row me 2 column, third row me 3 
cout << count++ << " ";
j++;
}
cout << endl;
i++;
    }
}