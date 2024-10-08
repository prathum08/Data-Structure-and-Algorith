#include<iostream>
using namespace std;


//In this Question we are using 2 pointer Apporoach

int reverseArray(int arr[] , int n){
    int low = 0;
    int high = n - 1;

    while(low < high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}
int print(int arr[] , int n){
    for(int i = 0 ; i < n; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[] = {5,3,6,9,8};

    int length = sizeof(arr) / sizeof(int);

    reverseArray(arr , length);
    print(arr , length);
    
}