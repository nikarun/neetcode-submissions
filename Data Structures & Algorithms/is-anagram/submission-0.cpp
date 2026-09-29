class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(m!=n) return false;
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        for(char p:t){
            if(mp[p]==0) return false;
            mp[p]--;
        }
        return true;
    }
};

