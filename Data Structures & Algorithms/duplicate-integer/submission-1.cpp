class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for(int n: nums){
            if(st.count(n) > 0){
                return true;
            }
            st.insert(n);
        }
        
        return false;
    }
};