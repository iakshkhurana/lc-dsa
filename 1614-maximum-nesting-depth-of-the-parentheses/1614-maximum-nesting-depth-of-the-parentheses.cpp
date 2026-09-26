// class Solution {
// public:
//     int maxDepth(string s) {
//         int depth = 0, best = 0;
//         for (char ch : s) {
//             if (ch == '(') best = max(best, ++depth);
//             else if (ch == ')') --depth;
//         }
//         return best;
//     }
// };

class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int best = 0;
        for (char ch : s) {
            if (ch == '(') {
                st.push(ch);
                best = max(best, (int)st.size());
            } else if (ch == ')') {
                st.pop();
            }
        }
        return best;
    }
};