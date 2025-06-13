class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int maxi =INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i] == 1)
            {
                cnt++;
            }
            else
            {
                maxi=max(cnt,maxi);
                cnt=0;
            }
        }
        maxi = max(cnt,maxi);
        return maxi;
    }
};