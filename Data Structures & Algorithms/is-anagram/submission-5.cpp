class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int> freq_table;

        for(char ch : s){
            freq_table[ch]++; 
        }
        for(char ch: t){
            freq_table[ch]--;
        }
        for(auto& i : freq_table){
            if(i.second != 0){
                return false;
            }         
        }
        return true;


    }
};
