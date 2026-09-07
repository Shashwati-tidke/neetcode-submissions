class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> arr;

        for (auto i: nums){
            if(arr.count(i)){
                return true;
            }
            arr.insert(i);
        }
        return false;
        
    }
};