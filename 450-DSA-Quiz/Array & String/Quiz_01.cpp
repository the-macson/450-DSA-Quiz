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