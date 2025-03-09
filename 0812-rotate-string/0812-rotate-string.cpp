class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();

        for(int i=1;i<=n;i++)
        {
            int j=0;
            for(int k=0;k<n;k++)
            {
                swap(s[j],s[k]);
            }
            if(s == goal) return true;
        }
        return false;
    }
};