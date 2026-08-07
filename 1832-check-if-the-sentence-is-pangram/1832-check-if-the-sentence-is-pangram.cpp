class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> mpp(26);
        for(auto c:sentence){
            mpp[c-'a']++;
        }
        for(auto it:mpp){
            if(it==0) return false;
        }
        return true;
    }
};