#include<iostream>
using namespace std;

int insertElement(int arr[] , int n , int x , int pos){
    int idx = pos - 1;

    for(int i = n - 1 ; i >= idx ; i--){
        arr[i+1] = arr[i];
    }

    arr[idx] = x;

}

int printArr(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int arr[] = {1,2,3,5,6};

    int sizeArr = sizeof(arr) / sizeof(int);

    cout << "The Array Before Insertion:- " ;
    printArr(arr , sizeArr);
    cout << endl;

    insertElement(arr , sizeArr , 4 , 4);

    cout << "The Array after Insertion:- ";
    printArr(arr , sizeArr);



}