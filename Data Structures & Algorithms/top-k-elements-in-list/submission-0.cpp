class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> freq;
        for(auto n: nums){
            freq[n]++;
        } 

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minHeap;
        //Minheap is priority queue only.Minheap is implemented using pq

        for(auto &p: freq){
            minHeap.push({p.second,p.first});
            if(minHeap.size()>k){minHeap.pop();
            }
        }

        vector<int> result;

        while(!minHeap.empty()){
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return result;

    }
};
