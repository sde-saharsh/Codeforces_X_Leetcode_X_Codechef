#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int> 
#define vll vector<ll>
#define vvll vector<vector<ll>>

#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)

int digitSum(long long n) {
    int s = 0;
    while(n > 0) {
        s += (n % 10);
        n /= 10;
    }
    return s;
}

void solve() {
    long long x;
        cin >> x;

        int ans = 0;
        for(long long y = x; y <= x + 90; y++) {
            if(y - digitSum(y) == x)
                ans++;
        }

        cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while (t--) solve();
}
