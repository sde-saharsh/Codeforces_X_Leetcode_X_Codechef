#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int> 
#define vll vector<ll>
#define vvll vector<vector<ll>>

#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)

bool can(string s){
    ll count_ones = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') count_ones++;
    }
    ll zeroes = s.size();
    if(count_ones==0){
        if(zeroes%3==0){
            cout<<zeroes/3<<endl;
        } else{
            cout<<(zeroes/3)+1<<endl;
        }
        return true;
    } else{
        return false;
    }

    return false;
}

ll calPrefix(ll count){
    if(count%3==0){
        return (count-1)/3;
    } else{
        return (count-1)/3;
    }
}

ll calMid(ll count){
    return count/3;
}

ll calSuffix(ll count){
    if(count%3==0){
        return (count-1)/3;
    } else{
        return (count-1)/3 + 1;
    }
}

ll countOnes(string s){
    ll count = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') count++;
    }
    return count;
}

void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;

    int c = 0;
    int f = -1;
    int l = -1;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            c++;
            if (f == -1) f = i;
            l = i;
        }
    }

    if (c == 0) {
        cout << (n + 2) / 3 << "\n";
        return;
    }

    int a = 0;
    a += (f + 1) / 3;

    int x = n - 1 - l;
    a += (x + 1) / 3;

    int p = f;
    for (int i = f + 1; i < n; ++i) {
        if (s[i] == '1') {
            int g = i - p - 1;
            a += g / 3;
            p = i;
        }
    }

    cout << c + a << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while (t--) solve();
}
