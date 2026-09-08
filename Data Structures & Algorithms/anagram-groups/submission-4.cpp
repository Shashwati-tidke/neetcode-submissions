class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram ; 
        for(auto& s: strs)
        {
            string temp=s;
            sort(temp.begin(),temp.end());
            anagram[temp].push_back(s);
        }
        vector<vector<string>> result;
        for(auto& t: anagram){
            result.push_back(t.second);
        }
        return result;
    }
};
