class Solution {
public:
    bool isPalindrome(string s) {
        string ans;

        for(char c: s){
            if(isalnum(c)){
                ans+=tolower(c);
            }
        }

        int i = 0;
        int r = ans.size() -1;
        
        while(i<r){
            if(ans[i] != ans[r]){
                return false;
            }
            i++;
            r--;
        }

        return true;
    }
};
