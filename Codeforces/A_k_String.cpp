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
    int k ;
    cin>>k;
    string s;
    cin >> s;

    vector<int> freq(26, 0);

    // Count frequency
    for (char c : s) {
        freq[c - 'a']++;
    }

    // Check feasibility
    for (int i = 0; i < 26; i++) {
        if (freq[i] % k != 0) {
            cout << -1;
            return ;
        }
    }

    // Build base string
    string base = "";
    for (int i = 0; i < 26; i++) {
        base += string(freq[i] / k, char('a' + i));
    }

    // Repeat k times
    string result = "";
    for (int i = 0; i < k; i++) {
        result += base;
    }

    cout << result<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    // cin >> t;
    while (t--) solve();
}
