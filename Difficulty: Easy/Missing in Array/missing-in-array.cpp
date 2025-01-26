//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        // Calculate the XOR of numbers from 1 to n+1 (expected range including missing number)
        int x1 = 0;
        for (int i = 1; i <= n + 1; i++) {
            x1 ^= i;
        }

        // Calculate the XOR of the numbers in the array
        int x2 = 0;
        for (int num : nums) {
            x2 ^= num;
        }

        // XOR of x1 and x2 gives the missing number
        return x1 ^ x2;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.missingNumber(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends