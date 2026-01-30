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
    int n;
        cin >> n;

        vector<long long> p(n + 1);
        p[n] = 1;

        for (int i = n - 1; i >= 1; i--) {
            if (i % 2 == 1)
                p[i] = p[i + 1] + i;
            else
                p[i] = p[i + 1] - i;
        }

        // normalize to [1..n]
        long long mn = *min_element(p.begin() + 1, p.end());
        for (int i = 1; i <= n; i++) {
            p[i] += (1 - mn);
        }

        for (int i = 1; i <= n; i++) {
            cout << p[i] << " ";
        }
        cout << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while (t--) solve();
}
