class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        /*
        vector<int>temp(nums.size());
        for(int i = 0;i<nums.size();i++) {
            temp[(i+k)%nums.size()] = nums[i];
        }

        nums = temp;
        */
        int n = nums.size();
        
        // Adjust k if it's greater than n
        k = k % n;
        
        // Reverse the entire array
        reverse(nums.begin(), nums.end());
        
        // Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // Reverse the remaining n - k elements
        reverse(nums.begin() + k, nums.end());
    }
};
