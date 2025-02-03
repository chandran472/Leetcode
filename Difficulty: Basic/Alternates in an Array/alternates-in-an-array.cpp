//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        vector<int> ans;
        int n=0;
        int s = arr.size();
        if(arr.size()%2 == 0){
            n=(arr.size()/2 - 1);
        }
        else{
            n=arr.size()/2;
        }
        for(int i=0;i<=n;i++){
            ans.push_back(arr[i*2]);
        }
        return ans;
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution sln;
        vector<int> list = sln.getAlternates(arr);
        for (int i : list)
            cout << i << " ";
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends