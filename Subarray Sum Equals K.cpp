class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        /*
        brute force
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int sum = 0;
                for (int l = i; l <= j; l++) {  // Use 'l' instead of 'i' here to avoid shadowing
                    sum += nums[l];
                }
                if (sum == k) count++;
            }
        }

        return count;

        */

        /*
        better approach take 0(n2) complexity
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                if (sum == k) count++;
            }
        }

        return count;
        */


        // optimal approach
        unordered_map<int,int> mp;
        int result = 0;

        int cumsum = 0;
        mp.insert({0,1});

        for(int i = 0; i<nums.size();i++) {
            cumsum += nums[i];

            if(mp.find(cumsum - k) != mp.end()) {
                result += mp[cumsum-k];
            }

            mp[cumsum]++;
        }

        return result;
    }
};
