class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> freqtable;

        for(auto ch : s){
            freqtable[ch] = freqtable[ch] + 1;
        }
        for(auto ch : t){
            freqtable[ch] = freqtable[ch] - 1;
        }

        for(auto& i : freqtable){
            if(i.second !=0){
                return false;
            }
        }
        return true;
    }
};
