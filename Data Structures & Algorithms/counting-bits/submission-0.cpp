class Solution {
public:
    vector<int> countBits(int n) {

        vector <int> result;
        for(int i=0; i<=n; i++){
            int count =0;
            for(int j=0; j<32; j++){    
                if(i &(1<<j)){
                    count++;
                }
            }
            result.push_back(count);
        }
        return result;
        
    }
};
