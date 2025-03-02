class Solution {
public:
    bool checkIfPangram(string s) {
        int n=s.size();
        map<char,int>mp;
        for(int i='a';i<='z';i++)
        {
            mp[i]++;
        }
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for(auto it :mp)
        {
            if(it.second==1) return false;
        }
        return true;
        
    }
};