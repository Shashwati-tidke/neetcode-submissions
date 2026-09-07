class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set <int> duplicate;

        for(auto i : nums){
            if(duplicate.count(i))
            {
                return true;
            }
            duplicate.insert(i);
        }
        return false;

        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        /*unordered_set<int> element;

        for(int i : nums){
            if(element.count(i)){
                return true;
            }
            element.insert(i);
        }

        return false;
        */
        
    }
};