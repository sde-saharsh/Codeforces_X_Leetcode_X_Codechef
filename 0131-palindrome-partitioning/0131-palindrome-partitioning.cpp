class Solution {
public:
    vector<vector<string>> ans;
    bool pallindrome(string s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    void backtrack(string& s,int idx,vector<string> curr){
        if(idx==s.size()){
            ans.push_back(curr);
            return;
        }
        for(int i=idx;i<s.size();i++){
            if(pallindrome(s,idx,i)){
                curr.push_back(s.substr(idx,i-idx+1));
                backtrack(s,i+1,curr);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> curr;
        backtrack(s,0,curr);
        return ans;
    }
};