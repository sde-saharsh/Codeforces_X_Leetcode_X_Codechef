class Solution {
public:
    vector<vector<int>> ans;
    void func(int k,int n,int sum,int idx,vector<int>& temp){
        if(sum>n) return;
        if( temp.size()==k){
           if(sum==n){
            ans.push_back(temp);
           } 
           return;
        }

        for(int i=idx;i<=9;i++){
            temp.push_back(i);
            func(k,n,sum+i,i+1,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        func(k,n,0,1,temp);
        return ans;
    }
};