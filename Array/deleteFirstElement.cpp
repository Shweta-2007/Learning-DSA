#include <iostream>
using namespace std;

int deleteElem(int arr[], int n, int k){
    int i;
    for( i= 0; i < n; i++){
        if(arr[i] == k)
        break;
           
           
    }
     if(i == n)
            return n;
             for(int j = 0; j < n - 1; j++){
                arr[j] = arr[j + 1];
            }
            return (n - 1);
}

int main(){
int array[10];
int n;
cout << "Enter number of elements in array: ";
    cin >> n;
cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
int k;
cout << "enter element to be deleted " << endl;
cin >> k;

int length = deleteElem(array, n,k);
cout << "Length of new array is "<< length << endl;
}