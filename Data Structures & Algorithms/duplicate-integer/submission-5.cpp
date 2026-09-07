class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> duplicate;
        for(auto n: nums){
            if(duplicate.count(n)){
                return true;
            }
            duplicate.insert(n);
        }
        return false;
        
    }
};