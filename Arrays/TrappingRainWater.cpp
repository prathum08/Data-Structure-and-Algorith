#include<iostream>
using namespace std;

int trapWater(int arr[] , int n){
    int res = 0;
    int rmax[n];
    int lmax[n];

    lmax[0] = arr[0];
    for(int i = 1 ; i < n ; i++){
        lmax[i] = max(arr[i] , lmax[i-1]);
    }

    rmax[n-1] = arr[n-1];
    for(int i = n -2 ; i >= 0 ; i--){
        rmax[i] = max(arr[i] ,rmax[i+1] );
    }

    for(int i = 1 ; i < n -1 ; i++){
        res = res + (min(lmax[i] , rmax[i]) - arr[i]);
    }

    return res;
}

int main(){
    int arr[] = {2,0,2};
    int size = sizeof(arr)/sizeof(int);

    trapWater(arr , size);

}