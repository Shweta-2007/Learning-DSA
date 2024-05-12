#include <iostream>
using namespace std;

int largestElemIndex(int arr[], int size){
    if(size <= 0) return -1;
   int largest = 0;
for(int i = 1; i < size; i++){
if(arr[i] > arr[largest]){
    largest = i;
}
}
return largest;
}

int main(){
int array[10];
int n;
cout << "enter number of elements in array" << endl;
cin >> n;
cout << "enter elements in array" << endl;
for(int i = 0; i < n; i++){
    cin >> array[i];
};

int result = largestElemIndex(array, n );
cout << "Index of largest number is " << result << endl;

}