class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       
        /*
         vector <int> output(nums.size(),1);
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++)
            {
                if(i!=j){
                    output[i]=output[i]*nums[j];
                }
                
            }
        }
        return output;
        */
        int n = nums.size();
        vector<int> output(n,1);
        for(int i=1;i<n;i++){
            output[i]=output[i-1]*nums[i-1];
        }
        int postprod=1;
        for(int i=n-1; i>=0; i--){
            output[i]= output[i]*postprod;
            postprod= postprod*nums[i];
        }

        return output;

    }
};
