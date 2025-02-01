class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0,cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int remove=sum-k;
            cnt+=mp[remove];
            mp[sum]+=1;
        }
        return cnt;
    }
};