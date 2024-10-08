#include<iostream>
using namespace std;


int getSecondLargest(int arr[] , int n) {
        // Code Here
        int res = -1;
        int largest = 0;
        for(int i = 1 ; i < n ; i++){
            if(arr[i] > arr[largest]){
                res = largest;
                largest = i;
            }
            else if(arr[i] != arr[largest]){
                if(res == -1 || arr[i] > arr[res]){
                    res = i;
                }
            }
        }
        if(res != -1){
            return arr[res];
        }
        else{
            return -1;
        }
}
int main(){
    int arr[] = {1,2,3,5,6};

    int sizeArr = sizeof(arr) / sizeof(int);

    int a = getSecondLargest(arr , sizeArr);
    cout <<"The Second Largest Element is :- " << a << endl;

}