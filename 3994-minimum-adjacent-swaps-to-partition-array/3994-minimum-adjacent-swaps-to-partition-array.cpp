class Solution {
public:
    int mod = 1e9+7;
    int helper(vector<int>& nums) {
        int twos = 0, ones = 0;
        int ans = 0;

        for (int x : nums) {
            if (x == 2) {
                twos++;
            } else if (x == 1) {
                ans = (ans +twos)%mod;
                ones++;
            } else { // x == 0
                ans = (ans+twos + ones)%mod;
            }
        }

        return ans;
    }
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        int n = nums.size();
        vector<int> arr(n);
        
        for(int i=0;i<n;i++){
            if(nums[i]<a) arr[i] = 0;
            else if(nums[i]>b) arr[i] = 2;
            else arr[i] = 1;
        }

        // int 
        return helper(arr);
    }
};