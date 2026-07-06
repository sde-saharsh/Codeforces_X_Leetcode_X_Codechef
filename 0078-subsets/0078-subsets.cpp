class Solution {
public:
    vector<vector<int>> ans;
    void func(vector<int>& nums,vector<int>& temp,int idx){
        if(idx==nums.size()){
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[idx]);
        func(nums,temp,idx+1);
        temp.pop_back();
        func(nums,temp,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        func(nums,temp,0);
        return ans;
    }
};