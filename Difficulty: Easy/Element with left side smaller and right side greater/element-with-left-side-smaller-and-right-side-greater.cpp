//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findElement(vector<int> &arr) {
        // code here
        int n=arr.size();
        int ans=0,maxans=0;
        for(int i=1;i<n-1;i++)
        {
            if(arr[i-1]<arr[i] && arr[i] < arr[i+1]) ans=arr[i];
            else maxans = max(maxans,arr[i]);
        }
        
        if(ans > maxans) return ans;
        
        return -1;
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
        int ans = ob.findElement(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends