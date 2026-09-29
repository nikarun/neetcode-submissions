class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
     int n=nums.size();
     if(n==0) return false;
     unordered_map<int,int>mp;
     for(int p:nums){
        if(mp[p]>0) return true;
        mp[p]++;
     }
     return false;  
    }
};