class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n =nums.length;
        HashMap<Integer,Integer> mp = new HashMap<>();
        for(int i=0;i<n;i++)
        {
            int s1 = nums[i];
            int s2 = target-s1;

            if(mp.containsKey(s2))
            {
                return new int[] {mp.get(s2),i};
            }

            mp.put(nums[i],i);
        }
        return new int[] {};
    }
}