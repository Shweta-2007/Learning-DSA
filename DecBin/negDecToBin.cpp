#include <iostream>
using namespace std;

string toBinary(int num) {
    // Size of integer in bits
    int size = sizeof(int) * 8;
    string binary = "";

    for (int i = size - 1; i >= 0; --i) {
    int shifted_num = num >> i;
    int bit = shifted_num & 1;
    binary = binary + (bit == 0 ? '0' : '1');
}


    return binary;
}

int main() {
    int num;
    cout << "Enter a negative number: ";
    cin >> num;

    cout << "Binary representation: " << toBinary(num) << std::endl;

    
}

