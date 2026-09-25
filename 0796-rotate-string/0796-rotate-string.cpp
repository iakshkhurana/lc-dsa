class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;
        string db=s+s;
        return db.find(goal) !=string::npos;
    }
};