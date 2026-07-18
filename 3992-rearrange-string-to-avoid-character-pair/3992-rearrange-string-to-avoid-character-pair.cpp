class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int n = s.size();

        int cnty = 0;

        string ans = "";
        for(int i=0;i<n;i++){
            if(s[i]==y) cnty++;
            if(s[i]!=y){
                ans = ans + s[i];
            }
        }

        string newy = "";
        while(cnty--){
            newy = newy + y;
        }

        return newy + ans;    
    }
};