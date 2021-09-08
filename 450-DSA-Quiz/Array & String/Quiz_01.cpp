#include<bits/stdc++.h>
using namespace std;
vector<int> sortedSquares(vector<int> &nums){
    // method 1
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = nums[i]*nums[i];
    }
    sort(nums.begin(),nums.end());
    return nums;
    // method 2
    vector<int> res(nums.size());
    int l = 0, r = nums.size() - 1;
    for (int k = nums.size() - 1; k >= 0; k--)
    {
        if (abs(nums[r]) > abs(nums[l]))
            res[k] = nums[r] * nums[r--];
        else
            res[k] = nums[l] * nums[l++];
    }
    return res;
}
int main(){
    int n,x;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
       nums.push_back(x);
    }
    sortedSquares(nums);
    for (int i = 0; i < n; i++)
    {
        cout <<nums[i] <<" ";
    }
    
}