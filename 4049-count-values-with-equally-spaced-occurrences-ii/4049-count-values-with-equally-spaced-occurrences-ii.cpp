class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        
        int n = nums.size();

        unordered_map<int,vector<int> > mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]].push_back(i);
        }

        int count = 0;

        for(auto it: mpp){
            vector<int> arr = it.second;
            if(arr.size()>=3){
                int space = arr[1] - arr[0];
                bool flag = true;
                for(int i=0;i<arr.size()-1;i++){
                    if((arr[i+1]-arr[i])!=space){
                        flag = false;
                    }
                }

                if(flag == true) count++;
            }
        }

        return count;

    }
};