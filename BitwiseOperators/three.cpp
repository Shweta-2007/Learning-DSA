// POST INCREMENT => Pehle use kar lo purani value, fir jab wo statement execute ho jaaye toh i ki value badha do

// int i = 3;
// int a = 2;

// sum = a + (i++);
// sum = 2 + (3) = 5
// Now i will increase and it will hold value of 4

// PRE INCREMENT  => pehle i ki value increase hogi fir use hogi

// int i = 3;
// int a = 2;

// sum = a + (++i);
// sum = 2 + (4) = 6 , here value of i = 4

#include <iostream>
using namespace std;

int main(){

int i = 10;

cout << (++i) << endl;  // 11
cout << (i++)<< endl;  // 11, i = 12
cout << (i--)<< endl;  // 12, i = 11
cout << (--i)<< endl;  // 10

int a = 1;
int b = 2;

if(a-- > 0 && ++b > 2){
    cout << "Stage1- Inside If ";
} else{
    cout << "Stage2- Inside else "; 
}

cout << a << " " << b << endl;

if(a-- > 0 || ++b > 2){
    cout << "Stage1- Inside If ";
} else{
    cout << "Stage2- Inside else "; 
}

cout << a << " " << b << endl;

int number = 3;
cout << (25 * (++number));

int k = 1;
int l = k++;
int m = ++k;
cout << l;
cout << m;



}
