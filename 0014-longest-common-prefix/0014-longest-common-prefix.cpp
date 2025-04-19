class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==0) return "";

        string prefix = strs[0];
        string ans;
        for(int i=1;i<n;i++)
        {
            ans="";
            for(int j=0;j<prefix.size() &&strs[i].size();j++)
            {
                
                if(prefix[j] == strs[i][j]) ans+=strs[i][j];
                else break;
            }
            prefix = ans;
        }

        return prefix;
    }
};