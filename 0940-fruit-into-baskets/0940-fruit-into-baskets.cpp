class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int l=0,r=0,maxlen=0;
        int k=2;
        map<int,int>mp;
        while(r<n)
        {
            mp[fruits[r]]++;

            while(mp.size() > k)
            {
                mp[fruits[l]]--;
                if(mp[fruits[l]] == 0)
                {
                    mp.erase(fruits[l]);
                }
                l++;
            }

            if(mp.size() <= k)
            {
                maxlen = max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};