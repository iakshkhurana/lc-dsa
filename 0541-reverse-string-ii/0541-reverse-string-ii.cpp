class Solution {
public:
    string reverseStr(string s, int k) {
        // cut 2k then unme k elements reverse
        int cut = 2 * k;
        int n = s.length();
        for (int i = 0; i < n; i += cut) {
            int mini = min(i + k, n);
            reverse(s.begin() + i, s.begin() + mini);
        }
        return s;
    }
};