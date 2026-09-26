class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto ch : s){
            mp[ch]+=1;
        }
        priority_queue<pair<int,int>>pq;
        for(auto &it:mp){
            pq.push({
                it.second, it.first
            });
        }
        string final="";
        while(!pq.empty()){
            auto [cnt, ch]=pq.top();
            pq.pop();
            final+=string(cnt,ch);
        }
        return final;
    }
};