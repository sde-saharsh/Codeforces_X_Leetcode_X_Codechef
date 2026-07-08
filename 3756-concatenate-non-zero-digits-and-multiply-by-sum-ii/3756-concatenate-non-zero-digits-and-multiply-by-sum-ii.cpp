class Solution {
public:

    long long mod = 1e9+7;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {

        int n = s.size();

        vector<long long> num(n);
        vector<long long> sum(n);
        vector<long long> cnt(n);
        vector<long long> power(n+1);

        power[0] = 1;

        for(int i=1;i<=n;i++){
            power[i] = (power[i-1]*10)%mod;
        }
        for(int i=0;i<n;i++){
            long long digit = s[i]-'0';
            if(i>0){
                num[i]=num[i-1];
                sum[i]=sum[i-1];
                cnt[i]=cnt[i-1];
            }
            if(digit!=0){
                num[i]=(num[i]*10+digit)%mod;
                sum[i]=(sum[i]+digit)%mod;
                cnt[i]++;
            }
        }
        vector<int> ans;
        for(auto q:queries){
            int l=q[0];
            int r=q[1];
            long long x=num[r];
            long long prevNum=0;
            long long prevCnt=0;
            long long prevSum=0;


            if(l>0){
                prevNum=num[l-1];
                prevCnt=cnt[l-1];
                prevSum=sum[l-1];
            }

            long long digits = cnt[r]-prevCnt;
            x = (x - (prevNum * power[digits])%mod + mod)%mod;
            long long ssum=(sum[r]-prevSum+mod)%mod;
            ans.push_back((x*ssum)%mod);
        }

        return ans;
    }
};