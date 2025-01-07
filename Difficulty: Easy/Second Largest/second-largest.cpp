//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
         int n = arr.size();
        if (n < 2) return -1; // Not enough elements for a second largest

        sort(arr.begin(), arr.end()); // Sort the array
        int largest = arr[n - 1];
        int secondLargest = -1;

        // Iterate from the second last element to find the second largest
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] != largest) { // Check for a distinct element
                secondLargest = arr[i];
                break;
            }
        }

        return secondLargest;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends