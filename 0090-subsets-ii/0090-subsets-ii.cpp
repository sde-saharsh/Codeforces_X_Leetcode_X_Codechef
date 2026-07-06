class Solution {
public:
    set<vector<int>> ans;
    void func(vector<int>& nums,vector<int>& temp,int idx){
        if(nums.size()==idx){
            ans.insert(temp);
            return;
        }

        temp.push_back(nums[idx]);
        func(nums,temp,idx+1);
        temp.pop_back();
        func(nums,temp,idx+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        sort(nums.begin(),nums.end());
        func(nums,temp,0);
        vector<vector<int>> re;
        for(auto it:ans) re.push_back(it);
        return re;
    }
};