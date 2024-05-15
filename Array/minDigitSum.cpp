#include <iostream>
#include <vector>
using namespace std;

vector<int> minDigitSum(int sum) {
    if (sum > 18) {
        return {};
    }
    vector<int> result;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            if (i + j == sum) {
                int pair = i * 10 + j; 
                result.push_back(pair); 
            } 
        }
    }

    return result; 
}

int main(){
    int sum;
    cout << "Enter the sum: ";
    cin >> sum;

    vector<int> pairs = minDigitSum(sum);

    cout << "Pairs with digit sum equal to " << sum << " are: ";
    for (int pair : pairs) {   
        cout << pair << " ";    
    }
    cout << endl;
     int minNumber = *min_element(pairs.begin(), pairs.end());
    cout << "Minimum number among the pairs: " << minNumber << endl;

    return 0;
}
