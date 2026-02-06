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
     int g, c, l;
    cin >> g >> c >> l;

    int mx = max({g, c, l});
    int mn = min({g, c, l});

    if (mx - mn >= 10) {
        cout << "check again";
    } else {
        vector<int> v = {g, c, l};
        sort(v.begin(), v.end());
        cout << "final " << v[1];
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    // cin >> t;
    while (t--) solve();
}
