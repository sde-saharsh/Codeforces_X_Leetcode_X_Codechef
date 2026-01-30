#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int existing = 0;
        for (char c : s) {
            if (c == '1') existing++;
        }

        int add = 0;
        int i = 0;

        while (i < n) {
            if (s[i] == '1') {
                i++;
                continue;
            }

            int j = i;
            while (j < n && s[j] == '0') j++;

            int len = j - i;

            bool leftOne = (i > 0 && s[i - 1] == '1');
            bool rightOne = (j < n && s[j] == '1');

            if (leftOne && rightOne) {
                // middle segment
                add += (len - 1) / 2;
            } else {
                // prefix or suffix segment
                add += (len + 1) / 2;
            }

            i = j;
        }

        cout << existing + add << "\n";
    }
    return 0;
}
