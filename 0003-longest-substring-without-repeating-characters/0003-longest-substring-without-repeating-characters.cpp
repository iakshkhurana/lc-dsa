class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, maxLen = 0;
        unordered_map<char,int> mpp; // char -> last seen index
        for (int r = 0; r < s.length(); r++) {
            if (mpp.count(s[r]) && mpp[s[r]] >= l)
                l = mpp[s[r]] + 1;          // jump l past the duplicate
            mpp[s[r]] = r;
            maxLen = max(maxLen, r - l + 1);
        }
        return maxLen;
    }
};