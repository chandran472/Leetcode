class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;

        // Count occurrences of each color
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        // Rebuild the array in-place based on the counts in the map
        int index = 0;
        for (auto& temp : mp) {
            int color = temp.first;
            int count = temp.second;
            while (count--) {
                nums[index++] = color;
            }
        }
    }
};
