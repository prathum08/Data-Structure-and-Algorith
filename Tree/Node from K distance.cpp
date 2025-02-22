#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
};


int counter(Node* root , int k , vector<int>& ans){
    //First check whether the Root is Null or Not
    if(root == NULL || k < 0){
        return;
    }
    //If the k value is Zero push the root data
    if(k == 0){
        ans.push_back(root -> data);
        return;
    }

    //Recursively call the funtion and decreament the count

    counter(root -> left , k - 1 , ans);
    counter(root -> right , k -1 , ans);

}
vector<int> Kdistance(Node* root , int k){
    vector<int> res;               // Vector to store the result
    counter(root , k , res);
    return res;
}