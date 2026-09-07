class Solution {
public:
    bool isAnagram(string s, string t) {
        /*
     //Solution 1 : sort the array and then compare   
        sort(s.begin(),s.end());
        sort(t.begin(), t.end());
        
        return(s==t);

        */

        //Solution 2 : Using Map

        unordered_map <char, int> freqtable;
        for(auto ch : s){
            freqtable[ch] = freqtable[ch] + 1;
        }
        for(auto ch : t){
            freqtable[ch] = freqtable[ch] - 1;
        }

        for(auto& i : freqtable){
            if(i.second != 0){
                return false;
            }
        }

        return true;

    }
};
