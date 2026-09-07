class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> angm;

        for(const auto &s: strs){
            string sortS = s;
            sort(sortS.begin(), sortS.end());
            angm[sortS].push_back(s);            
        }
        vector<vector<string>> result;
        for(auto &pair : angm){
            result.push_back(pair.second);
        }
        return result;


    }
};
