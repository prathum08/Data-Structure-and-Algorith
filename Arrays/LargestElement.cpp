#include<iostream>
using namespace std;

int getLargest(int arr[] , int n){
    int res = 0;
    for(int i = 1 ; i < n ; i++){
        if(arr[i] > arr[res]){
            res = i;
        }
    }
    return arr[res];
}

int main(){
    int arr[] = {1,2,3,5,6};

    int sizeArr = sizeof(arr) / sizeof(int);

    int a = getLargest(arr , sizeArr);
    cout <<"The Largest Element is :- " << a << endl;

}