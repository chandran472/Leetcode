class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int n = nums.size();
      unordered_map<int,int> mp;
      for(int i=0;i<n;i++)
      {
        int s1 = nums[i];
        int s2 = target - nums[i];
        if(mp.find(s2) != mp.end()) return{mp[s2],i};
        mp[nums[i]] = i;
      }
      return {};
    }
};