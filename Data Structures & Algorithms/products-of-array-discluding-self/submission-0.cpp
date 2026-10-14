class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroCnt=0;
        long long int pdt=1;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==0) ++zeroCnt;
            else pdt*=nums[i];
        }
        vector<int>res(nums.size(),0);
        if(zeroCnt>1) return res;
        for(int i=0;i<nums.size();++i){
            if(nums[i]!=0) {
                if(zeroCnt>0){
                res[i]=0;
                }
                else res[i]=pdt/nums[i];
            }
            else res[i]=pdt;
        }
        return res;
    }
};
