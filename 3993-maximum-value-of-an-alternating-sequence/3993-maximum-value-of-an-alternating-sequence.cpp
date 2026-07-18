class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1) return 1LL*s;
        return 1LL*(s + 1LL*m*(n/2) - 1LL*((n/2)-1));
    }
};