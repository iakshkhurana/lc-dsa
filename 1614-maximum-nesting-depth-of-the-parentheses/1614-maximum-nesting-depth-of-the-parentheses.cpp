class Solution {
public:
    int maxDepth(string s) {
        int depth = 0, best = 0;
        for (char ch : s) {
            if (ch == '(') best = max(best, ++depth);
            else if (ch == ')') --depth;
        }
        return best;
    }
};