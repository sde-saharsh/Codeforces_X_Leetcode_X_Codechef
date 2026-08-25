class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> st;
        for(int it:nums) st.insert(it);

        int i = 1;
        while(true){
            int n = k*i;
            if(st.count(n) <= 0){
                return n;
            }

            i++;
        }

        return -1;

    }
};