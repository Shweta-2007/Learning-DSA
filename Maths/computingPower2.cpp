#include <iostream>
using namespace std;

// using resccursion - more effecient

int power(int a, int b) {
    if (b == 0) return 1;
    int temp = power(a, b / 2);
    temp = temp * temp;
    if (b % 2 == 0) {
        return temp;
    } else {
        return temp * a;
    }
}

int main() {
    int a, b;
    cout << "Enter base number: ";
    cin >> a;
    cout << "Enter power number: ";
    cin >> b;

    int result = power(a, b);
    cout << "Result: " << result << endl;

    return 0;
}
