class Solution {
public:
    int scoreOfParentheses(string s) {
        // always balanced (wrong code)
        // int cnt=0;
        // for(auto i:s){
        //     if(i=='('){
        //         cnt+=1;
        //     }
        // }
        // return cnt;

        // laws - () = 1 ; ()() = 1+1=2 ; (())=2*1=2
        // (()()()) = 2(3)=6
        int cnt=0, ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt+=1;
            }
            else{
                cnt-=1; // ')' aaya
                if(s[i-1]=='('){
                    ans+=1 << cnt; // 2^cnt
                }
            }
        }
        return ans;
    }
};