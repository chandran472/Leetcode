class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        int s1 = 0;
        for(int i=0;i<n;i++)
        {
            s1+=nums[i];
        }

        int s2 = 0;
        for(int i=1;i<=n;i++)
        {
            s2+=i;
        }

        return s2-s1;
    }
};