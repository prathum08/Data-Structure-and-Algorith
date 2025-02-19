bool check(vector<int> &nums){
    int n = nums.size();
    int count = 0;  // this is used to store the count

    for(int i = 1 ; i < n ;i++){
        if(nums[i -1] > nums[i]){
            count++;
        }
    }

    // Checking if the array is rotated or not
    if(nums[n - 1] > nums[0]){
        count++;
    }

    return count<= 1;
}