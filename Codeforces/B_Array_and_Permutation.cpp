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

        vector<int> p(n+1), a(n+1);
        vector<int> pos(n+1);

        for (int i = 1; i <= n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        for (int i = 1; i <= n; i++) cin >> a[i];

        const int INF = 1e9;
        vector<int> L(n+1, INF), R(n+1, -INF);

        for (int i = 1; i <= n; i++) {
            L[a[i]] = min(L[a[i]], i);
            R[a[i]] = max(R[a[i]], i);
        }

        bool ok = true;
        for (int v = 1; v <= n; v++) {
            if (R[v] == -INF) continue; // value not present in a
            if (pos[v] < L[v] || pos[v] > R[v]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while (t--) solve();
}
