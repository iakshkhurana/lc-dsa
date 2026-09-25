class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())    return false;
        int freq[256]={0};
        for(int i=0;i<s.length();i++){
            freq[s[i]]+=1;
            freq[t[i]]-=1;
        }
        for(int i=0;i<256;i++){
            if(freq[i]!=0){
                return false;
            }
        }
        return true;
    }
};