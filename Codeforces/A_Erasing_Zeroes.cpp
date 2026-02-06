#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int> 
#define vll vector<ll>
#define vvll vector<vector<ll>>

#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)


void solve() {
    string s;
    cin>>s;

    int n = s.size();
    int start = 0;
    int end = n-1;

    while(start<n && s[start]!='1'){
        start++;
    }
    while(end>0 && s[end]!='1'){
        end--;
    }

    ll count = 0;
    for(int i = start;i<=end;i++){
        if(s[i]=='0') count++;
    }
    cout<<count<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while (t--) solve();
}
