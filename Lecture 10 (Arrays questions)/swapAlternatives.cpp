#include<iostream>
using namespace std;

int swapAlternatives(int arr[], int size) {
    for(int i=0;i<size/2;i+=2) {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(int i=0;i<size;i++) {
        cout<<arr[i];
    }
 return 0;
}

int main() {
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    swapAlternatives(arr, size);
    return 0;
}