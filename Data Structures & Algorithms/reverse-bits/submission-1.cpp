class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        /*
        //Logic to check one in n and set the bit of result accordingly
        // 31-i th place
        for(int i=0 ;i<32; i++){
            if(n & (1<<i))
            {   
                int j=31-i;
                result = result|(1<<j);
            }
        }
        return result;
        */
        for(int i=0; i<32; i++){
            result = (result<<1)|(n&1);
            n=n>>1;
        }
        return result;
    }
};
