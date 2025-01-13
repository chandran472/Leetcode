class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        reverse(nums.begin(), nums.begin() + n - k); // Reverse the first part
        reverse(nums.begin() + n - k, nums.end());   // Reverse the second part
        reverse(nums.begin(), nums.end());
    }
};