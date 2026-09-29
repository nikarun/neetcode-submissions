class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int len=strs.size();
        unordered_map<string,vector<string>> res;
        for(auto &s: strs){
            vector<int>cnt(26,0);
            for(char c:s){
                cnt[c-'a']++;
            }
            string reconstruct=to_string(cnt[0]);
            for(int i=0;i<26;++i){
                reconstruct+=','+to_string(cnt[i]);
            }
            res[reconstruct].push_back(s);
        }
        vector<vector<string>>result;
        for(const auto &pair:res){
            result.push_back(pair.second);
        }
        return result;


    }
};







// ["act", "opst", "opst", "act", "opst", "ath"]


