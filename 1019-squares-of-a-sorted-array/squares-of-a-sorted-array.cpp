class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     int n = nums.size();
     vector<int> ans(n);
     int left = 0;
     int right = n-1;
     int k = n-1;

     while(left<=right){
        if(nums[left]*nums[left] > nums[right]*nums[right]){
        ans[k] = nums[left]*nums[left];
        left++;
     }
     else{
        ans[k] = nums[right]*nums[right];
        right--;
     }
     k--;
     }
     return ans;
    }
};