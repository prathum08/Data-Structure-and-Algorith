#include<iostream>
using namespace std;

int deleteElement(int arr[] , int n , int x){
    int i;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == x){
            break;
        }
    }

    if(i == n){
        return n;
    }

    for(int j = i ; j < n - 1 ; j++){
        arr[j] = arr[j+1];
    }

    return (n-1);
}

int main(){

    int arr[] = {26 ,35 ,98 ,45 ,56};

    int sizeAr = sizeof(arr) / sizeof(int);

    cout << "Size before deletion:- "<< sizeAr << endl;

    int sizeDeleted = deleteElement(arr , sizeAr , 98);

    cout << "Size after Deletion:- " << sizeDeleted << endl;

    

}