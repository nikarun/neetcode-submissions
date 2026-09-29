class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0) return {};
        unordered_map<int,int>mp;
        for(int p:nums){
            mp[p]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        vector<int>ans;
        while(k-->0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};


// freq 
// monotonic stack ->
