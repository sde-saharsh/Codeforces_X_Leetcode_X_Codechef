class Solution {
public:
    vector<string> keypad = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };
    vector<string> ans;
    void func(string &digits, string &temp, int idx) {
        if (idx == digits.size()) {
            ans.push_back(temp);
            return;
        }
        int digit = digits[idx] - '0';

        for (char ch : keypad[digit]) {
            temp.push_back(ch);
            func(digits, temp, idx + 1);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        if (digits.empty()) return {};
        string temp;
        func(digits, temp, 0);

        return ans;
    }
};