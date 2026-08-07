class Solution {
public:
    // peak - strictly greater than immediate neighbour
    // valley - strictly less than immediate neighbour
    int valid(string s){
        int n = s.size();
        int count = 0;
        for(int i=1;i<n-1;i++){
            if(s[i] < s[i-1] && s[i] < s[i+1]) count++;
            else if(s[i] > s[i-1] && s[i] > s[i+1]) count++;
        }
        return count;
    }
    int totalWaviness(int num1, int num2) {
        int count = 0;
        for(int i=num1;i<=num2;i++){
            string str = to_string(i);
            count += valid(str);
        }
        return count;
    }
};