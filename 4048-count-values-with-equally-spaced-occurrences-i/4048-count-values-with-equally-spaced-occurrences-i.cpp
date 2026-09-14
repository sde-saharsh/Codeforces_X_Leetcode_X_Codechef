class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        unordered_map<int,int> mpp;
        for(int num:nums){
            mpp[num]++;
        }


        for(auto it: mpp){
            if(it.second != 3) continue;
            int num = it.first;
            int i1 = -1,i2 =-1,i3=-1;

            for(int i=0;i<n;i++){
                if(nums[i] == num){
                    if(i1==-1){
                        i1 = i;
                    } else if(i2==-1){
                        i2 = i;
                    } else{
                        i3 = i;
                    }
                }
            }

            if(i2-i1 == i3-i2){
                    count++;
                }
        }

        return count;
    }
};