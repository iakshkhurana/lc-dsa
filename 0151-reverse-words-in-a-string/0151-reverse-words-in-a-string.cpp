class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.length() - 1;
        while (i >= 0) {
            while (i >= 0 && s[i] == ' ')
                i--;
            string st = "";
            while (i >= 0 && s[i] != ' ') {
                st.push_back(s[i]);
                i--;
            }
            reverse(st.begin(), st.end());
            if (!st.empty()) {
                if (!ans.empty())
                    ans += " ";
                ans += st;
            }
        }
        return ans;
    }
};