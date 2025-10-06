class Solution {
public:
    // int func(vector<int>& nums,int ind,int jumps)
    // {
    //     if(ind >= nums.size()-1) return jumps;
    //     int mini = INT_MAX;
    //     for(int i=1;i<=nums[ind];i++)
    //     {
    //         mini = min(mini,func(nums,ind+i,jumps+1));
    //     }
    //     return mini;
    // }
    int jump(vector<int>& nums) {
        int n=nums.size();

        int left = 0,right = 0;
        int jumps = 0;

        while(right < n-1)
        {
            int farthest = 0;

            for(int i=left;i<=right;i++)
            {
                farthest = max(i+nums[i] ,farthest);
            }
            jumps = jumps+1;
            left = right+1;
            right = farthest;
            
        }
        return jumps;
    }
};