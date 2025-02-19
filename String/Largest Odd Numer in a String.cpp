#include<iostream>
using namespace std;


string oddNum(string num){
    int n = num.length();

    for(int i = n -1 ; i>= 0 ; i--){
        if((num[i] - '0') % 2 != 0){    // this is done because this will convert the string to int and check for the odd number
            return num.substr(0 , i + 1);
        }
    }

    return "";
}