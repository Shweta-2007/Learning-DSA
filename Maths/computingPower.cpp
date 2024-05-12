#include <iostream>
using namespace std;

void computingPower(int a, int b){
    int result = 1;
    // 2,3 => 2 * 2 * 2
for(int i = 0; i < b; i++){

result = result * a;
}
cout << result << endl;

}



int main(){
    int a; int b;
    cout << "Enter base number" << endl;
    cin >> a;

     cout << "Enter power number" << endl;
    cin >> b;

    computingPower(a,b);
  
};
