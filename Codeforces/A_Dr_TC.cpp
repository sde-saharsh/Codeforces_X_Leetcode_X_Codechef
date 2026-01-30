#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int k = 0;
        for (char c : s) {
            if (c == '1') k++;
        }

        int result = n + k * (n - 2);
        cout << result << "\n";
    }
    return 0;
}
